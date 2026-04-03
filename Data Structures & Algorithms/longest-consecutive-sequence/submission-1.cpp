class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0; 
        int currlength=1;
        if(nums.size()==0){
            return 0;
        }

        sort(nums.begin(), nums.end());



        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]+1==nums[i+1]){
                currlength++;
            }
            else if(nums[i]==nums[i+1]){
                continue;
            }
            else{
                ans=max(currlength, ans);
                currlength=0;
            }
        }
        return max(currlength, ans);

    }
};
