class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map <int , int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>s;
        for(auto& i: mp){
            s.push_back({i.second, i.first});
        }
        sort(s.begin(), s.end());
        int n = s.size();
        for(int i=n-1; i>=n-k; i--){
            ans.push_back(s[i].second);
        }
        return ans;
    }
};
