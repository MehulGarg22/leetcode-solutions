class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=1; 
        if(s.size()==0){
            return 0;
        }
        for(int i=0; i<s.size(); i++){
            unordered_set<char>st;

            for(int j=i; j<s.size(); j++){
                if(st.count(s[j])){
                    break;
                }
                st.insert(s[j]);
            }
            int stSize=st.size();
            res=max(res, stSize);
        }
        return res;
    }
};
