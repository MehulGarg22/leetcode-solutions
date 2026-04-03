class Solution {
public:
    void dfs(vector<int>&nums, vector<int>&store, vector<vector<int>>&ans, int idx){
        ans.push_back(store);
        for(int i=idx; i<nums.size(); i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            store.push_back(nums[i]);
            dfs(nums, store, ans, i+1);
            store.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>store;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        dfs(nums,store, ans, 0);
        return ans;
    }
};
