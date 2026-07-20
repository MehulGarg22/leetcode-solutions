class Solution {
public:
    int lengthOfLastWord(string s) {
        int start=s.size()-1, end=-1;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]!=' '){
                start=i;
                cout<<start<<endl;
                break;
            }
        }
        for(int j=start; j>=0; j--){
            if(s[j]!=' '){
                continue;
            }else{
                end=j;
                cout<<j<<endl;
                break;
            }
        }
        return start-end;
    }
};