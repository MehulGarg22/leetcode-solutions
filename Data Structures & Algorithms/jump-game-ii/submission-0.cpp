class Solution {
public:
    int jump(vector<int>& nums) {
        int maxReach=nums[0];
        int minV=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(i>maxReach) return false;
            maxReach=max(maxReach, i+nums[i]);
            minV=min(minV, maxReach);
            if(maxReach==nums.size()-1) {
                return minV;
            }
        }
        return 0;
    }
};
