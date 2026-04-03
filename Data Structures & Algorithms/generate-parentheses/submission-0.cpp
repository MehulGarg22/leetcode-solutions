class Solution {
public:
    void solve(vector<string>& ans, int open, int close, string &s){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open>0){
            string s1=s;
            s1.push_back('(');
            solve(ans, open-1, close, s1);
        }
        if(close>open){
            string s1=s;
            s1.push_back(')');
            solve(ans, open, close-1, s1);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=n;
        int close=n;
        string s="";
        solve(ans, open, close, s);
        return ans;
    }
};
