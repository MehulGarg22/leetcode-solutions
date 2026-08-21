class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0; i<details.size(); i++){
            for(int j=0; j<details[i].size(); j++){
                char c=details[i][j];
                if(c=='M' || c=='F' ||c=='O'){
                    char first=details[i][j+1];
                    char second=details[i][j+2];
                    string s="";
                    s+=first;
                    s+=second;
                    cout<<s;
                    int num=stoi(s);
                    if(num>60) ans++;
                    break;
                }
            }
        }
        return ans;
    }
};