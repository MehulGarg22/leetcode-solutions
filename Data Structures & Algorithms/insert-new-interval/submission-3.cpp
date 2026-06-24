class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int itr;
        for(int i=0; i<intervals.size(); i++){
            if(newInterval[0]>intervals[i][1]){
                ans.push_back(intervals[i]);
            }
            else if(newInterval[1]<intervals[i][0]){
                itr=i;
                break;
            }
            else{
                newInterval[0]=min(newInterval[0], intervals[i][0]);
                newInterval[1]=max(newInterval[1], intervals[i][1]);
            }
        }
        ans.push_back(newInterval);
        while(itr<intervals.size()){
            ans.push_back(intervals[itr]);
            itr++;
        }
        return ans;
    }
};
