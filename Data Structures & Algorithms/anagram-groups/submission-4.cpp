class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        vector<vector<string>> ans;
        for(int i=0; i<strs.size(); i++){
            string sortedString=strs[i];
            sort(sortedString.begin(), sortedString.end());
            mp[sortedString].push_back(strs[i]);
        }
        for(auto& itr: mp){
            ans.push_back(itr.second);
        }
        return ans;
    }
};
