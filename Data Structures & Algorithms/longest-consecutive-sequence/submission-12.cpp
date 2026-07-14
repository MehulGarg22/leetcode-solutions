class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        int ans=INT_MIN;
        if(nums.size()==0) return 0;
        for(auto &itr:s){
            if(s.find(itr-1)==s.end()){
            int count=1;
                for(int i=1; i<s.size(); i++){
                    if(s.find(itr+i)!=s.end()){
                        count++;
                    }else{
                        break;
                    }
                }
                ans=max(count, ans);
            }
        }
        return ans;
    }
};
