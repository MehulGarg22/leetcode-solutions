class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { 
        unordered_map <string, vector<string>>st;

        for(int i=0; i<strs.size(); i++){
            string s=strs[i];
            sort(s.begin(), s.end());
            st[s].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto& pair:st){
            res.push_back(pair.second);
        }
        return res;
    }
};
