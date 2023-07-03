class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int margin=INT_MAX;
        int ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-2; i++){
            int l=i+1;
            int r=nums.size()-1;

            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];

                if(sum==target){
                    return target;
                }
                if(abs(sum-target)<margin){
                    margin=abs(sum-target);
                    ans=sum;
                }
                if(sum<target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }

        return ans;
    }
};
