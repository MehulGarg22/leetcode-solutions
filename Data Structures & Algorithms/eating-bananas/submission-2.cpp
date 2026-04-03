class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int left=1, right=piles[piles.size()-1];
        int minV=INT_MAX;
        while(left<=right){
            int mid=left+(right-left)/2;
            int calculateHour=0;
            for(int i=0; i<piles.size(); i++){
                calculateHour=calculateHour+ceil((double)piles[i]/(double)mid);
            }
            if(calculateHour<=h){
                minV=min(minV, mid);
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return minV;
    }
};
