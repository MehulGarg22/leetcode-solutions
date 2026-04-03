class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]!="+" && tokens[i]!="*" && tokens[i]!="/" && tokens[i]!="-"){
                int v=stoi(tokens[i]);
                st.push(v);
            }else{
                int second=st.top();
                st.pop();
                int first=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    int val=first+second;
                    st.push(val);
                }
                if(tokens[i]=="-"){
                    int val=first-second;
                    st.push(val);
                }
                if(tokens[i]=="*"){
                    int val=first*second;
                    st.push(val);
                }
                if(tokens[i]=="/"){
                    int val=first/second;
                    st.push(val);
                }
            }
        }
        return st.top();
    }
};
