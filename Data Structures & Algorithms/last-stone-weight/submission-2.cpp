class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;

        for(int i=0; i<stones.size(); i++){
            q.push(stones[i]);
        }

        while(q.size()>1){
            int x=q.top();
            q.pop();
            int y=q.top();

            if(x==y) q.pop();
            else if(x<y){
                q.pop();
                q.push(y-x);
            }else{
                q.pop();
                q.push(x-y);
            }
        }
        if(q.empty()) return 0;
        return q.top();
    }
};
