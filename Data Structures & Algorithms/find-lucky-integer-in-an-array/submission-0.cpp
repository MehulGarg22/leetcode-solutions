class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto &itr: mp){
            if(itr.first==itr.second) return itr.first;
        }
        return -1;
    }
};