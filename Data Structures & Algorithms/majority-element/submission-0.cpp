class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<pair<int, int>>v;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto& itr: mp){
            v.push_back({itr.second, itr.first});
        }
        sort(v.rbegin(), v.rend());
        return v[0].second;
    }
};