class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        vector<int>ans;
        for(auto &itr: s){
            ans.push_back(itr);
        }
        for(int i=0; i<ans.size(); i++){
            nums[i]=ans[i];
        }
        return ans.size();
    }
};