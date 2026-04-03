class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s1v(26,0);
        vector<int>windowCount(26,0);
if (s1.size() > s2.size()) return false;
        for(int i=0; i<s1.size(); i++){
            s1v[s1[i]-'a']++;
            windowCount[s2[i]-'a']++;
        }

        if(s1v==windowCount) return true;
        int left=0;
        for(int right=s1.size(); right<s2.size(); right++){
            windowCount[s2[right]-'a']++;
            windowCount[s2[left]-'a']--;
            left++;

            if(s1v==windowCount) return true;
        }
        return false;
    }
};
