class Solution {
public:
     int n;
    int dp[13][10001];
    int solve(vector<int>&a,int target,int ind){
        if(ind>=n || target<=0)
            return target==0?0:INT_MAX-1;
        
        if(dp[ind][target]!=-1)return dp[ind][target];
                                  //  |                       |
        if(a[ind] <= target)      //  V take                  V not take
            return dp[ind][target]=min(1+solve(a,target-a[ind],ind), 0+solve(a,target,ind+1));
        else
            return dp[ind][target]=0+solve(a,target,ind+1);
    }
    int coinChange(vector<int>& a, int target) {
        n=a.size();
        memset(dp,-1,sizeof(dp));
        int ans=solve(a,target,0);
        return ans==INT_MAX-1?-1:ans;
    }
};