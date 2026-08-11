class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int sumsofar=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            int remaining=sum-sumsofar-nums[i];
            if(remaining==sumsofar) return i;
            sumsofar+=nums[i];
        }
        return -1;
    }
};