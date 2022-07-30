class Solution {
public:
    int solve(vector<vector<int>>& grid,int i,int j,vector<vector<int>> &dp){
        
        if(i>=grid.size() || j>=grid[0].size()){
            return 1e9;
        }
        if(i==grid.size()-1 && j==grid[0].size()-1){
            return grid[i][j];
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int ans1=grid[i][j]+solve(grid,i,j+1,dp);
        int ans2=grid[i][j]+solve(grid,i+1,j,dp);
        return dp[i][j]=min(ans1,ans2);
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
  int m = grid[0].size();
        vector<vector<int> > dp(n,vector<int>(m,-1));
        return solve(grid,0,0,dp);
        
        
    }
};