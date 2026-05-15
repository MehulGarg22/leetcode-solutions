class Solution {
public:
    bool validPalindrome(string s) {
        int i=0, j=s.size()-1, count=0;
        while(i<=j){
            if(s[i]!=s[j]){
                count++;
                if(count>1){
                    return false;
                }
            }
            i++; j--;
        }
        return true;
    }
};