class Solution {
public:

    void dfs(vector<int>& nums, int target, vector<vector<int>>&ans, vector<int>&store, int start){
        if(target==0){
            ans.push_back(store);
            return;
        }
        for(int i=start; i<nums.size(); i++){
            if (target<0) break;
            if(i>start && nums[i]==nums[i-1]) continue;
            store.push_back(nums[i]);
            dfs(nums, target-nums[i],ans, store, i+1);
            store.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>store;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target,ans, store, 0);
        return ans;
    }
};
