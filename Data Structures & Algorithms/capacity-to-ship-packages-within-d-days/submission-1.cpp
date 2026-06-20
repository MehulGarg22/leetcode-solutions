class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int right=0, left=INT_MIN, ans=INT_MAX;
        for(int i=0; i<weights.size(); i++){
            right+=weights[i];
            left=max(left, weights[i]);
        }
        while(left<=right){
            int mid=left+(right-left)/2;
            int currweight=0, nextday=1;
            for(int j=0; j<weights.size(); j++){
                currweight+=weights[j];
                if(currweight>mid){
                    nextday++;
                    currweight=weights[j];
                }
            }
            if(nextday>days) left=mid+1;
            else{
                ans=min(ans, mid);
                right=mid-1;
            } 
        }
        return ans;
    }
};