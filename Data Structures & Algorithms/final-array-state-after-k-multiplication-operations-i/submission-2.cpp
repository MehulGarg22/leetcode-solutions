class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k>0){
            int minIDx=0;

            for(int i=0; i<nums.size(); i++){

                if(nums[i]<nums[minIDx]){
                    minIDx=i;
                }
            }
            nums[minIDx]*=multiplier;
            k--;
        }
        return nums;
    }
};