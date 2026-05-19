class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(), nums.end());
    }
};