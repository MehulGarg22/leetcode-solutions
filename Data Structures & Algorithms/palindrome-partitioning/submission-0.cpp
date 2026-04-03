class Solution {
public:
    bool isPalindrome(string &s){
        int i=0, j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++; j--;
        }   
        return true;
    }
    void solve(string &s, vector<string>&store, vector<vector<string>>&ans, int idx){
        if(idx==s.size()){
            ans.push_back(store);
            return;
        }
        for(int i=idx; i<s.size(); i++){
            string slice= s.substr(idx, i-idx+1);
            if(isPalindrome(slice)){
                store.push_back(slice);
                solve(s, store, ans, i+1);
                store.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>store;
        solve(s, store, ans, 0);
        return ans;
    }
};
