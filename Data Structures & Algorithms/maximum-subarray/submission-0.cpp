class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxSum=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            currsum=max(nums[i], currsum+nums[i]);
            maxSum=max(maxSum, currsum);
        }
        return maxSum;
    }
};
