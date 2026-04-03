class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size(), col=matrix[0].size();
        vector<bool>rowflag(row, false);
        vector<bool>colflag(col, false);
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    rowflag[i]=true;
                    colflag[j]=true;
                }
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(rowflag[i]==true || colflag[j]==true){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
