class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=INT_MIN;
        int minSofar=prices[0];
        for(int i=0; i<prices.size(); i++){
            minSofar=min(minSofar, prices[i]);
            maxP=max(maxP, prices[i]-minSofar);
        }
        return maxP;
    }
};
