class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size();i++){
            int val=abs(nums[i]);
            nums[i]=val*val;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};