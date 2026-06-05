class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // vector<int>ans(nums.begin(), nums.end());
        int numSize=nums.size();
        for(int i=0; i<numSize; i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};