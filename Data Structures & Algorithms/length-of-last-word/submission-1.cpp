class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int start=0, end=-1;
        for(int i=s.size(); i>0; i--){
            char c=s[i];
            if(tolower(c)>='a' && tolower(c)<='z'){
                start=i;
                break;
            }
        }
        for(int j=start-1; j>=0; j--){
            if(s[j]== ' '){
                end=j;
                break;
            }

        }
        return start-end;
    }
};