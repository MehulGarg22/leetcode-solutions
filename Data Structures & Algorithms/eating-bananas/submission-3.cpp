class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int left=1, right=piles[piles.size()-1];
        int minSum=INT_MAX;
        while(left<=right){
            int mid=left+(right-left)/2;
            int sum=0;
            for(int i=0; i<piles.size(); i++){
                sum=sum+ceil((double)piles[i]/(double)mid);
            }
            if(sum<=h){
                minSum=min(minSum, mid);
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return minSum;
    }
};
