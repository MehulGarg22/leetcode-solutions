class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int>mp;
        int maxi=INT_MIN;
        int mini=INT_MAX;

        for(auto itr:s){
            mp[itr]++;
        }
        for(auto i:mp){
            int freq=i.second;
            if(freq%2!=0){
                maxi=max(maxi, freq);
            }else{
                mini=min(mini, freq);
            }
        }
        int ans=maxi-mini;

        return ans;
    }
};