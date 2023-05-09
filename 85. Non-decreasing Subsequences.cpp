class Solution {
private:
    void f(vector<int>& nums, vector<int>& temp, set<vector<int> >& ans, int s){

        if(temp.size()>1){
            ans.insert(temp);
        }


        for(int i=s; i<nums.size(); i++){
            if((temp.empty() || nums[i]>=temp.back())){
                temp.push_back(nums[i]);
                f(nums, temp, ans, i+1);
                temp.pop_back();
            }
        }


    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        set<vector<int> >ans;
        f(nums, temp, ans, 0);
        vector<vector<int>>fans;
        for(auto val:ans){
            fans.push_back(val);
        }
        return fans;
    }
};


