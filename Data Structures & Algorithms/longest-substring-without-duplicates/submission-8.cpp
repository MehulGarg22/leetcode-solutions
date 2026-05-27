class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount=INT_MIN;
        if(s.size()==0) return 0;
        for(int i=0; i<s.size(); i++){
            set<char>ss;
            for(int j=i; j<s.size(); j++){
                if(ss.find(s[j])!=ss.end()){
                    break;
                }
                ss.insert(s[j]);
            }
            int setSize=ss.size();
            maxCount=max(maxCount, setSize);
        }
        return maxCount;
    }
};
