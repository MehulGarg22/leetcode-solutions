class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            char val=s[i];
            if(val=='(' || val=='{' || val=='['){
                st.push(val);
            }else{
                if(st.empty()) return false;
                else if((val==')' && st.top()=='(') || (val=='}' && st.top()=='{') || (val==']' && st.top()=='[')) st.pop();
                else return false;

            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};
