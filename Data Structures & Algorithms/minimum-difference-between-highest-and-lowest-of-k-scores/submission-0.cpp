class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0, j=k-1, mini=INT_MAX;
        while(j!=nums.size()){
            mini=min(mini, nums[j]-nums[i]);
            i++;
            j++;
        }

        return mini;
    }
};