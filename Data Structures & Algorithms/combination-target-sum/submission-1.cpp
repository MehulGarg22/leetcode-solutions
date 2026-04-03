class Solution {
public:
    void dfs(vector<int>& nums, int target, vector<vector<int>>&ans, vector<int>&store, int start){
        if(target==0){
            ans.push_back(store);
            return;
        }
        for(int i=start; i<nums.size(); i++){
          if (target<0) break;
            store.push_back(nums[i]);
            dfs(nums, target-nums[i],ans, store, i);
            store.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>store;
        dfs(nums, target,ans, store, 0);
        return ans;
    }
};
