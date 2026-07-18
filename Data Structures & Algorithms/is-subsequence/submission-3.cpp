class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(int i=0; i<s.size(); i++){
            char first=s[i];
            bool found=false;
            while(j<t.size()){
                char second=t[j];
                if(first==second){
                    j++;
                    found=true;
                    break;
                }
                j++;
            }
            if(!found) return false;
        }
        return true;
    }
};