class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n, 0);
        int count=0;
        int product=1;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                count++;
            }else{
                product=product*nums[i];
            }
        }
        if(count==0){
            for(int i=0; i<n; i++){
                ans[i]=product/nums[i];
            }
        }
        else if(count==1){
            for(int i=0; i<n; i++){
                if(nums[i]==0){
                    ans[i]=product;
                }
            }
        }

        return ans;
    }
};
