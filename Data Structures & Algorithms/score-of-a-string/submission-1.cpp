class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i=0; i<s.size()-1; i++){
            char a=s[i];
            char b=s[i+1];
            int first=a-'a';
            int second=b-'a';
            cout<<first<<second;
            int absol=abs(second-first);
            ans+=absol;

        }
        return ans;
    }
};