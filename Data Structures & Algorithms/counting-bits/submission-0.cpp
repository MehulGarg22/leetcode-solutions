class Solution {
public:
    int bits(int num){
        int res=0;
        while(num>0){
            res++;
            num=num&(num-1);
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        while(n>=0){
            int res=bits(n);
            ans.push_back(res);
            n--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
