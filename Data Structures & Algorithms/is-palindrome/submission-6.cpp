class Solution {
public:
    bool isPalindrome(string s)  {
        vector<char>v;
        for(int i=0; i<s.size(); i++){
            char c=s[i];
            if(c>='a' && c<='z' || c>='A' && c<='Z' ||c>='0' && c<='9'){
                v.push_back(tolower(c));
            }
        }
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        int i=0, j=v.size()-1;
        while(i<=j){
            if(v[i]!=v[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
