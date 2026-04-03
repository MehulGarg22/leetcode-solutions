class Solution {
public:
    void dfs(vector<int>& nums, int target, vector<vector<int>>&ans, vector<int>&store, int i){
        if(target==0){
            ans.push_back(store);
            return;
        }

        if(target<0 || i>=nums.size()) return;

        store.push_back(nums[i]);
        dfs(nums, target-nums[i], ans, store, i);
        store.pop_back();
        dfs(nums, target, ans, store, i+1);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>store;
        dfs(nums, target, ans, store, 0);

        return ans;
    }
};
