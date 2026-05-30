class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>windowString(26,0);
        vector<int>s1v(26,0);
        int left=0;
        if(s2.size()<s1.size()) return false;
        for(int i=0; i<s1.size(); i++){
            s1v[s1[i]-'a']++;
            windowString[s2[i]-'a']++;
        }
        if(s1v==windowString) return true;
        for(int i=s1.size(); i<s2.size(); i++){
            windowString[s2[left]-'a']--;
            windowString[s2[i]-'a']++;
            left++;
            if(windowString==s1v) return true;
        }
        return false;
    }
};
