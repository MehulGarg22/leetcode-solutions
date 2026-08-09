class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1) return true;
        for(int i=0; i<nums.size()-1; i++){
            int first=nums[i];
            int second=nums[i+1];

            if(first%2==0 && second%2==0) return false;
            if(first%2!=0 && second%2!=0) return false;
        }
        return true;
    }
};