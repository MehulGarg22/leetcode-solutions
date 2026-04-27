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
                if(count>1) return ans;
            }else{
                product=product*nums[i];
            }
        }
        if(count==0){
            for(int i=0; i<n; i++){
                nums[i]=product/nums[i];
            }
        }
        else if(count==1){
            for(int i=0; i<n; i++){
                if(nums[i]==0){
                    nums[i]=product;
                }else{

                nums[i]=0;
                }
            }
        }
        else if(count>1){
                for(int i=0; i<n; i++){
                    nums[i]=0;
                
            }
        }

        return nums;
    }
};
