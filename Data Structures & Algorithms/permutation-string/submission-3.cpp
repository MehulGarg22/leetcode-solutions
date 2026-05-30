class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        string windowString="";
        if(s2.size()<s1.size()) return false;
        for(int i=0; i<s1.size(); i++){
            windowString+=s2[i];
        }
        if(s1==windowString) return true;
        for(int i=s1.size(); i<s2.size(); i++){
            windowString.erase(0, 1);
            windowString+=s2[i];
            if(windowString==s1) return true;
        }
        return false;
    }
};
