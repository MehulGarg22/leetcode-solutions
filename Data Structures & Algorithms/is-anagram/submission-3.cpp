class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>first;
        unordered_map<char, int>second;
        for(int i=0; i<s.size(); i++){
            first[s[i]]++;
            second[t[i]]++;
        }

        return first==second;
    }
};
