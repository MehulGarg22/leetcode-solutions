class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        int maxCount=INT_MIN;
        for(auto& itr: s){
            int count=1;
                while(s.find(itr+count)!=s.end()){
                    count++;
                }
            
            maxCount=max(maxCount, count);
        }
        return maxCount;
    }
};
