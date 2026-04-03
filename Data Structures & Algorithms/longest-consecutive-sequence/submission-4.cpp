class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int maxLength=0;
        for(auto& i: s){
            int length=1;

            if(s.find(i-1)==s.end()){
                while(s.find(i+length)!=s.end()){
                    length++;
                    
                }
            maxLength=max(length, maxLength);
            }
        }
        return maxLength;
    }
};
