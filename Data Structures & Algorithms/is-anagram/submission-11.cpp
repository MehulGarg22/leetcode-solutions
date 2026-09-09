class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;
        unordered_map<char, int>mp1;
        for(auto &itr: s){
            mp[itr]++;
        }
        for(auto &itr: t){
            mp1[itr]++;
        }

        return mp==mp1;
    }
};
