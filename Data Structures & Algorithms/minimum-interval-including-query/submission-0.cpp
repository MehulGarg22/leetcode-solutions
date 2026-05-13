class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        vector<int>ans;
        for(int i=0; i<queries.size(); i++){
            int minLength=-1;
            for(int j=0; j<intervals.size(); j++){
                if(queries[i]>=intervals[j][0] && queries[i]<=intervals[j][1]){
                    int length=intervals[j][1]-intervals[j][0]+1;
                    if(minLength>length || minLength==-1){
                        minLength=length;
                    }
                }
            }
            ans.push_back(minLength);
        }
        return ans;
    }
};
