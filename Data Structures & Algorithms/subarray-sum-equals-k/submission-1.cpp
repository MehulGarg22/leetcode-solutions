class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>prefix;
        prefix.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            prefix.push_back(nums[i]+prefix[i-1]);
        }
        unordered_map<int, int>mp;
        int count=0;
        for(int i=0; i<prefix.size(); i++){
            if(prefix[i]==k) count++;
            int val=prefix[i]-k;
            if(mp.find(val)!=mp.end()){
                count+=mp[val];
            }
            mp[prefix[i]]++;
        }
        return count;
    }
};