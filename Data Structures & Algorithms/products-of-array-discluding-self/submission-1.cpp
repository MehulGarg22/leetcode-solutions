class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(), 0);
        int count=0;
        int product=1;
        for(int i=0; i<nums.size(); i++){
            
            
            if(nums[i]!=0){
                product=product*nums[i];
            }
            else if(nums[i]==0){
                count++;
            }
        }
        if(count>1){
            return ans;
        }
        for(int i=0; i<nums.size(); i++){
            if(count>0){
                if(nums[i]==0){
                    ans[i]=product;
                }else{
                    ans[i]=0;
                }
            }else{
                ans[i]=product/nums[i];
            }
        }
        return ans;
    }
};
