class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=INT_MIN;
        int minSofar=INT_MAX;
        for(int i=0; i<prices.size()-1; i++){
            minSofar=min(minSofar, prices[i]);
            maxP=max(maxP, prices[i]-minSofar);
        }
        return maxP;
    }
};
