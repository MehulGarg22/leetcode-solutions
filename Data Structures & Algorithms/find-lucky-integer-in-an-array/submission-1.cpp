class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int>mp;
        int ans=0;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto &itr: mp){
            if(itr.first==itr.second) {
                ans=max(ans, itr.first);
            }
        }
        if(ans!=0)return ans;
        return -1;
    }
};