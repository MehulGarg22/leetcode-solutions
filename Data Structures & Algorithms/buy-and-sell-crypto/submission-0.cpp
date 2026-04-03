class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSofar=INT_MAX;
        int ans=INT_MIN;

        for(int i=0; i<prices.size(); i++){
            minSofar=min(minSofar, prices[i]);
            int profit=prices[i]-minSofar;
            ans=max(ans, profit);
        }
        return ans;
    }
};
