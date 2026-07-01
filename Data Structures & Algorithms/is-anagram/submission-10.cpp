class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int>mp;
        unordered_map<char, int>mp2;
        for(int i=0; i<s.size(); i++){
            char item1=s[i];
            char item2=t[i];
            mp[item1]++;
            mp2[item2]++;
        }
        return mp==mp2;
    }
};
