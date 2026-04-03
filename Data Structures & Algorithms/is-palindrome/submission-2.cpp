class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;

        while(i<j){
            while(i<j && !isalphaNum(s[i])){
                i++;
            }
            while(i<j && !isalphaNum(s[j])){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++; j--;
        }
        return true;
    }

    bool isalphaNum(char c){
        if(c>='a' && c<='z' || c>='A' && c<='Z' || c>='0' && c<='9'){
            return true;
        }
        return false;
    }
};
