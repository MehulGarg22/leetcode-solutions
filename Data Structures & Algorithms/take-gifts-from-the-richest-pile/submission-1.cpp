class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>maxheap(gifts.begin(), gifts.end());
        long long ans=0;
        for(int i=0; i<k; i++){
            int topvalue=maxheap.top();
            maxheap.pop();
            maxheap.push((int)floor(sqrt(topvalue)));
        }
        while(maxheap.size()!=0){
            ans+=maxheap.top();
            maxheap.pop();
        }
        return ans;
    }
};