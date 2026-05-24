class Solution {
public:
    string simplifyPath(string path) {
        string ans="";
        stringstream ss(path);
        string curr;
        stack<string>st;
        while(getline(ss, curr, '/')){
            if(curr.empty()) continue;
            if(curr==".."){
                if(!st.empty()) st.pop();
                else continue;
            }
            else if(!curr.empty() && curr!="."){
                st.push(curr);
            }
        }
        if(st.empty()) return ans+"/";
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        return ans;
    }
};