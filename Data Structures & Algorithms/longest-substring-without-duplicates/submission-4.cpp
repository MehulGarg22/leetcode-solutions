class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlengths=INT_MIN; 
        unordered_set<char>st;
        int l=0;

        for(int i=0; i<s.size(); i++){
            while(st.count(s[i])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            maxlengths=max(maxlengths, i-l+1);
        }
        return maxlengths;
    }
};
