class Solution {
public:
    int find_paths(int x, int y,int m, int n, vector<vector<int>>&dp){
        if(x==m || y==n)return 0;
         if(x==m-1 && y==n-1)return 1;
        
         if(dp[x][y]!=-1)return dp[x][y];
        
        return dp[x][y]=find_paths(x+1,y,m,n,dp)+find_paths(x,y+1,m,n,dp);
        
        
        
    }
    
    int uniquePaths(int m, int n) {
   vector<vector<int>>dp(m,vector<int>(n,-1));
       // memset(dp,-1,sizeof dp);
        return find_paths(0,0,m,n,dp);
        
    }
};