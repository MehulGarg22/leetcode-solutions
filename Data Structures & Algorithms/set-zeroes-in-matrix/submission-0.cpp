class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size(), col=matrix[0].size();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    int k=0, m=0;
                    while(k<col ){
                        if(j!=k){
                            matrix[i][k]='#';
                        }
                            k++;
                    }
                    while(m<row){
                        if(i!=m){
                            matrix[m][j]='#';
                        }
                            m++;
                    }
                }
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]=='#'){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
