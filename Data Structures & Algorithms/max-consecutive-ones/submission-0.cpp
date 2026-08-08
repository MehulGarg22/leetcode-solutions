class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int ans=INT_MIN;
        int count=1;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
                ans=max(ans, count);
            }else{
                count=1;
                i=i+2;
            }
            i++;
        }
        return ans;
    }
};