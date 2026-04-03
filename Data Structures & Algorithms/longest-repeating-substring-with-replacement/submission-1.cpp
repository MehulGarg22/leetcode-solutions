class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int>mp;
        int left=0;
        int maxi=INT_MIN;
        int mostFreq=INT_MIN;
        for(int right=0; right<s.size(); right++){
            mp[s[right]]++;
            mostFreq=max(mostFreq, mp[s[right]]);
            while(right-left+1-mostFreq>k){
                mp[s[left]]--;
                left++;
            }
            maxi=max(maxi, right-left+1);
        }
        return maxi;
    }
};
