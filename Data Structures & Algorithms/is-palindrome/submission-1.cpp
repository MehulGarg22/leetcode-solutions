class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v;

        for(int i=0; i<s.size(); i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                v.push_back(tolower(s[i]));
            }
            else if (s[i]>='0' && s[i]<='9'){
                v.push_back(s[i]);
            }
        }

        vector<char> reverseVector=v;

        reverse(reverseVector.rbegin(), reverseVector.rend());

        return v==reverseVector;
    }
};
