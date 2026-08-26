class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int>mp;
        unordered_map<char, int>mp1={{'b',1},{'a',1},{'l',2},{'o',2},{'n',1}};
        for(int i=0; i<text.size(); i++){
            mp[text[i]]++;
        }
        int res=INT_MAX;
        for(auto &itr: mp1){
            res=min(res, mp[itr.first]/itr.second);
        }
        return res;
    }
};