class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            char str=s[i];
            if(str=='(' || str=='{' || str=='[') st.push(str);
            else{
                if(st.empty()) {
                    return false;
                }
                else if((str==')' && st.top()=='(') || (str==']' && st.top()=='[') || (str=='}' && st.top()=='{') ){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
