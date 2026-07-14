class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        int ans=INT_MIN;
        for(auto &itr:s){
            int count=1;
            if(s.find(itr-1)==s.end()){
                for(int i=itr; i<s.size(); i++){
                    if(s.find(i+1)!=s.end()){
                        count++;
                    }
                }
                ans=max(count, ans);
            }
        }
        return ans;
    }
};
