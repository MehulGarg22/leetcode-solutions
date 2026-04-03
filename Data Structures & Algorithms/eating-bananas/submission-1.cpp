class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int left=1, right=piles[piles.size()-1];
int minV=INT_MAX;
        while(left<=right){
            int k=left+((right-left)/2);
            int calculateHours=0;
            for(int i=0; i<piles.size(); i++){
                calculateHours=calculateHours+ceil((double)piles[i]/(double)k);
            }
            
            if(calculateHours<=h){
                right=k-1;
                minV=min(minV, k);
            }else{
                left=k+1;
            }
        }
        return minV;
    }
};
