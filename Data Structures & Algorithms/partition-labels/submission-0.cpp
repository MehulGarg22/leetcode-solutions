class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]=i;
        }
        int size=0;
        int end=0;
        vector<int>ans;
        for(int i=0; i<s.size(); i++){
            size++;
            end=max(mp[s[i]], end);
            if(i==end){
                ans.push_back(size);
                size=0;
            }
        }
        return ans;
    }
};
