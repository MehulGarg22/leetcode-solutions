class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0, right=nums.size();
        int ans;
        while(left<right){
            int mid=left+((right-left)/2);
            if(nums[mid]>right){
                
                left=mid+1;
            }else{
                right=mid;
            }
        }
        return nums[right];
    }
};
