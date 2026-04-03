class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>>v;
        vector<int>ans;
        for(auto& i:mp){
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end());
        int n=v.size()-1;
        for(int i=n; i>n-k; i--){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
