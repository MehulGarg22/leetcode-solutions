class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int val=st.top();
                st.pop();
                int result=0;
                if (tokens[i] == "+") {
                    result= st.top() + val;
                } else if (tokens[i] == "-") {
                    result= st.top() - val;
                } else if (tokens[i] == "*") {
                    result= st.top() * val;
                } else {
                    result= st.top() / val;
                }
                st.pop();
                st.push(result);
            }else{
                int val=stoi(tokens[i]);
                st.push(val);
            }
        }
        return st.top();
    }
};
