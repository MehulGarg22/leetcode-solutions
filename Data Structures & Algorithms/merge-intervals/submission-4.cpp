class Solution {

public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        // Edge case safety

        if (intervals.empty()) return {};



        // Sort guarantees we only ever move left to right

        sort(intervals.begin(), intervals.end());

        

        vector<vector<int>> ans;

        vector<int> snowball = intervals[0]; // Start our first snowball

        

        for (int i = 1; i < intervals.size(); i++) {

            // Does the next chunk touch our snowball?

            if (intervals[i][0] <= snowball[1]) {

                // Yes! Absorb it by stretching the snowball's end time

                snowball[0]=min(intervals[i][0],snowball[0]);
                snowball[1]=max(intervals[i][1],snowball[1]);


            } else {

                // No! Our snowball is finished. 

                ans.push_back(snowball);      // 1. Put it in the basket

                snowball = intervals[i];      // 2. Start a brand new snowball

            }

        }

        

        // Push the very last snowball into the basket

        ans.push_back(snowball);

        

        return ans;

    }

};

