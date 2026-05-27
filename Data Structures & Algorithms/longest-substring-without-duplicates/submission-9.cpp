class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>ss;
        int left=0, maxCount=INT_MIN;
        if(s.size()==0) return 0;
        for(int i=0; i<s.size(); i++){
            while(ss.find(s[i])!=ss.end()){
                ss.erase(s[left]);
                left++;
            }
            ss.insert(s[i]); 
            maxCount=max(maxCount, i-left+1);
        }
        return maxCount;
    }
};
