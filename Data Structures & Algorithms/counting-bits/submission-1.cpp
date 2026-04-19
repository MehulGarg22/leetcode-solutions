class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res=0;
        while(n>0){
            n=n&(n-1);
            res++;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        while(n!=-1){
            int val=hammingWeight(n);
            ans.push_back(val);
            n--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
