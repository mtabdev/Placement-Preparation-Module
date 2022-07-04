class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int l=0,h=(matrix.size()*matrix[0].size())-1;
        
        while(l<=h){
            
            int mid=(l+h)/2;
           
        int row=mid/matrix[0].size(),col=mid%matrix[0].size();
if(matrix[row][col]==target)return true;
            else if(matrix[row][col]<target)l=mid+1;
            else
                h=mid-1;
            
        }
        
        return false;
        
    }
};