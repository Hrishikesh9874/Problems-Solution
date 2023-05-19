class Solution {
private:
    void f(vector<int>& nums, int k, int i, vector<int>& temp, vector<vector<int>>& ans){
        if(i>=nums.size()){
            if(temp.size()==k){
                ans.push_back(temp);
            } 
            return;
        }
        if(temp.size()<=k){
            temp.push_back(nums[i]);
        f(nums, k, i+1, temp, ans);
            temp.pop_back();
        }
        f(nums, k, i+1, temp, ans);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        vector<int>temp;
        vector<vector<int>>ans;
        for(int i=1; i<=n; i++){
            nums.push_back(i);
        }
        f(nums, k, 0, temp, ans);
        return ans;
    }
};
