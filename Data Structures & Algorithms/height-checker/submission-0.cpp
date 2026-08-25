class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> compare(heights.begin(), heights.end());
        int ans=0;
        sort(compare.begin(), compare.end());
        for(int i=0; i<heights.size(); i++){
            cout<<compare[i]<<" ";
            if(heights[i]!=compare[i]) ans++;
        }
        return ans;
    }
};