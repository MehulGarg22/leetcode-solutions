class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>v;
        for(int i=0; i<strs.size(); i++){
            string s=strs[i];
            sort(s.begin(), s.end());
            v[s].push_back(strs[i]);
        }
        for(auto & mp: v){
            ans.push_back(mp.second);
        }
        return ans;
    }
};
