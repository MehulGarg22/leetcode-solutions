class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int, vector<int>>>q;
        for(int i=0; i<points.size(); i++){
            int x=points[i][0];
            int y=points[i][1];
            
            int distance=x*x+y*y;

            q.push({distance, points[i]});

            if(q.size()>k){
                q.pop();
            }
        }

        while(!q.empty()){

        ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
