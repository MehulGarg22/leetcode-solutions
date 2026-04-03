class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0, right=nums.size()-1;
        int minNum=INT_MAX;
        while(left<=right){
            int mid=left+((right-left)/2);
            if(nums[mid]>nums[right]){
                left=mid+1; 
                
            }else{
                right=mid-1;
                minNum=min(minNum, nums[mid]);
            }
        }
        return minNum;
    }
};
