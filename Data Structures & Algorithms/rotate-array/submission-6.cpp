class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int val=k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+val);
        reverse(nums.begin()+val, nums.end());
    }
};