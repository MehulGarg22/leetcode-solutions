class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(), intervals.end());
        int i=1, n=intervals.size();
        vector<int> newInterval=intervals[0];

        while(i<n){
            if (intervals[i][0] <= newInterval[1]) {
                // Yes! Absorb it by stretching the snowball's end time
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            } else {
                // No! Our snowball is finished. 
                ans.push_back(newInterval);      // 1. Put it in the basket
                newInterval = intervals[i];      // 2. Start a brand new snowball
            }
            i++;
        }
        ans.push_back(newInterval);

        return ans;
    }
};
