class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int count0=0;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                product=product*nums[i];
            }else{
                count0++;
            }
        }
        vector<int>ans(n,0);
        if(count0>1) return ans;
        for(int i=0; i<nums.size(); i++){
            if(count0==1){
                if (nums[i]==0){
                    ans[i]=product;
                }
            }else{
                    ans[i]=product/nums[i];
                }
        }
        return ans;
    }
};
