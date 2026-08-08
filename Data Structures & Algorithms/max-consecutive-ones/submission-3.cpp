class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int ans=0;
        int count=0;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
                ans=max(ans, count);
            }else{
                count=0;
            }
            i++;
        }
        return ans;
    }
};