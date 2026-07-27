class Solution {
public:
    int arrangeCoins(int n) {
        int left=1, right=n;
        int ans=INT_MIN;
        while(left<right){
            int mid=left+(right-left)/2;
            int coin=(mid*(mid+1))/2;
            if(coin<=n){
                ans=max(ans, mid);
                left=mid+1;
            }else{
                right=mid-1;
            }

        }
        return ans;
    }
};