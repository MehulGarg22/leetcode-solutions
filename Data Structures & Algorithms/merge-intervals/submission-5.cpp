class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());  
        vector<vector<int>>ans;
        vector<int>snowball=intervals[0];
        int i=1, n=intervals.size();
        while(i<n){
            if(snowball[1]>=intervals[i][0]){
                snowball[0]=min(intervals[i][0], snowball[0]);
                snowball[1]=max(intervals[i][1], snowball[1]);
            }else{
                ans.push_back(snowball);
                snowball=intervals[i];
            }
        }
        return ans;
    }
};
