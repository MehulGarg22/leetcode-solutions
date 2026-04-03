class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        sort(piles.begin(), piles.end());
        int left=1, right=piles[piles.size()-1];
        while(left<=right){
            int mid=left+((right-left)/2);
            int res=0;
            for(int i=0; i<piles.size(); i++){
                res=res+ceil((double)piles[i]/(double)mid);
            }
            if(res<=h){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};
