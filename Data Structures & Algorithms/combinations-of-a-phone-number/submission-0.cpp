class Solution {
public:
    void solve(unordered_map<char, string>&mp, vector<string>&ans,string &digits,  string store, int idx ){
        if(idx==digits.size()) {
            ans.push_back(store);
            return;
        }
        char ch=digits[idx];
        for(auto letter: mp[ch]){
            store+=letter;
            solve(mp, ans, digits, store, idx+1);
            store.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0){
            return ans;
        } 
        unordered_map<char, string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        
        string store="";
        solve(mp, ans, digits, store, 0);
        return ans;
    }
};
