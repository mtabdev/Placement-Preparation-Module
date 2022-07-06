class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        bool dp[nums.size()];
         
        memset(dp,false,sizeof dp);
        dp[nums.size()-1]=true;
        for(int i=nums.size()-2;i>=0;i--){
            int steps=nums[i];
            
            for(int j=1;j<=steps && j+i<nums.size();j++){
                if(dp[i+j]){
                    dp[i]=true;
                     break;
                }
                   
                
                
            }
           // if(mi!=INT_MAX)dp[i]=mi+1;
        }
      return dp[0];
    }  
 //   }for(int i=n-2;i>=0;i--){
//             for(int j=1;j<=nums[i] && i+j<n;j++){
//                 if(dp[i+j]){
//                     dp[i]=true;
//                     break;
//                 }
//             }
//         }
};