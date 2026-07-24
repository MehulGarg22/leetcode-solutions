class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0){
                break;
            }else{
                i++;
                if(i==nums.size()) return;
            }
        }
        int j=i;
        while(j<nums.size()){
            if(nums[j]!=0 && nums[i]==0){
                swap(nums[i], nums[j]);
                i++; j++;
            }else{
                j++;
            }
        }

    }
};