class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
         if(nums.size()==0)return 0;
        
        int dp[nums.size()];
        int ans=1;
        dp[0]=1;
        for(int i=1;i<nums.size();i++){
            
            dp[i]=1;
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i] && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
        
        /*
         vector<int> dp(nums.size(), 1);
        int ans = 1;
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i] && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
        */
        
        
        
        
    }
};