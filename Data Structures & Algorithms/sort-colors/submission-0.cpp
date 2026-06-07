class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else if(nums[i]==2){
                count2++;
            }
        }
        for(int i=0; i<count0; i++){
            nums[i]=0;
        }
    }
};