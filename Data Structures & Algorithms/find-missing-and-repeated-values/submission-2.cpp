class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int>s;
        int gridSize=grid.size();
        int valueSize=grid[0].size();
        int total=valueSize*gridSize;
        for(int i=0; i<gridSize; i++){
            for(int j=0; j<valueSize; j++){
                s[grid[i][j]]++;
            }
        }
        int sumofN=(total*(total+1))/2;
        int sum=0;
        int duplicate=0;
        for(auto &itr: s){
            sum+=itr.first;
            if(itr.second>1) duplicate=itr.first;
        }
        return {duplicate, sumofN-sum};
    }
};