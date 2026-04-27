class Solution {
public:
    bool isAnagram(string s, string t) {
        set<string>se;
        sort(t.begin(), t.end());
        se.insert(t);
        sort(s.begin(), s.end());
        if(se.find(s)!=se.end())return true;
        return false;
    }
};
