class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int ans=INT_MIN;
        int count=0;
        if(nums.size()<=1) return nums[i];
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
                ans=max(ans, count);
            }else{
                count=0;
                i=i+2;
            }
            i++;
        }
        return ans+1;
    }
};