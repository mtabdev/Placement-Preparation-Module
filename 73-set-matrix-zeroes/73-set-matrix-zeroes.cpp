class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col[matrix[0].size()];
        memset(col,-1,sizeof col);
        int row[matrix.size()];
        memset(row,-1,sizeof row);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++){
                
                if(matrix[i][j]==0){
                    row[i]=0;
                    col[j]=0;
                }
                
            }
        }
        
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++){
                
                if(row[i]==0 || col[j]==0)
                    matrix[i][j]=0;
            }
        }
        
        
        
        
    }
};