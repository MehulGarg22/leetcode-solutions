class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0, currentEnd=0, farthestEnd=0;
        for(int i=0; i<nums.size()-1; i++){
            farthestEnd=max(farthestEnd, i+nums[i]);
            if(i==currentEnd){
                jump++;
                currentEnd=farthestEnd;
                if(currentEnd>=nums.size()-1){
                    return jump;
                }
            }
        }
        return 0;
    }
};
