class Solution {
public:
    bool solve (string s , string t){
        unordered_map<char, char>mp;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]!=t[i]) return false;
            mp[s[i]]=t[i];
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return solve(s, t) && solve(t,s);
    }
};