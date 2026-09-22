class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<pair<int,int>>v;
        vector<int>ans;
        for(auto &itr: nums){
            mp[itr]++;
        }
        for(auto& i: mp){
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end());
        int size=v.size();
        for(int m=size-1; m>=size-k; m--){
            ans.push_back(v[m].second);
        }
        return ans;
    }
};
