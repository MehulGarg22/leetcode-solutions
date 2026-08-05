class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int>q(gifts.begin(), gifts.end());
        for(int i=0; i<k; i++){
            int n=q.top();
            q.pop();
            q.push((int)floor(sqrt(n)));
        }
        while(!q.empty()){
            ans+=q.top();
            q.pop();
        }
        return ans;
    }
};