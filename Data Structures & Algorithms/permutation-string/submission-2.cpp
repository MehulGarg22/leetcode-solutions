class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int>s1v(26,0);
        vector<int>window(26,0);
        int left=0;

        for(int i=0; i<s1.size(); i++){
            s1v[s1[i]-'a']++;
            window[s2[i]-'a']++;
        }
        if(window==s1v) return true;
        for(int i=s1.size(); i<s2.size(); i++){
            window[s2[left]-'a']--;
            window[s2[i]-'a']++;
            left++;
            if(window==s1v) return true;
        }
        return false;
    }
};
