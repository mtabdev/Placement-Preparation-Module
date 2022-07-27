class Solution {
public:
    int solve(vector<int>& values,int i,int j,vector<vector<int>>&dp){
        
        if(i+1==j){
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++){
            ans=min(ans,values[i]*values[j]*values[k]+solve(values,i,k,dp)+solve(values,k,j,dp));
            
        }
        return dp[i][j]=ans;
    }
    
    
    int minScoreTriangulation(vector<int>& values) {
       vector<vector<int>>dp(values.size()+1,vector<int> (values.size()+1, -1));
        return solve(values,0,values.size()-1,dp);
        
    }
};