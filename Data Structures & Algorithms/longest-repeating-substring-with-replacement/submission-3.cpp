class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0, maxCount=0;
        int mostFreq=0;
        unordered_map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            mostFreq=max(mostFreq, mp[s[i]]);
            while((i-left+1-mostFreq)>k){
                mp[s[left]]--;
                left++;
            }
            maxCount=max(maxCount, i-left+1);
        }
        return maxCount;
    }
};
