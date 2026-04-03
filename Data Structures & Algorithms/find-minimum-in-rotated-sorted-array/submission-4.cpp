class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0, right=nums.size()-1;
        int ans;
        while(left<right){
            int mid=left+((right-left)/2);
            if(nums[mid]>nums[right]){
                left=mid+1;  // eliminate left side array as the smaller value exist in right portion
            }else{
                right=mid;
            }
        }
        return nums[left];
    }
};
