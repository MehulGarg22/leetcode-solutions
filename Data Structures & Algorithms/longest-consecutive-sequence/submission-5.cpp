class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int maxlength=0;
        for(auto & itr: s){
            int length=1;
            if(s.find(itr-1)==s.end()){
                while(s.find(itr+length)!=s.end()){
                    length++;
                }
                maxlength=max(length,maxlength);
            }
        }
        return maxlength;
    }
};
