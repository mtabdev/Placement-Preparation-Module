class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        int mul=1,z=0;
        for(int i=0;i<nums.size();i++){
        mul*=nums[i];
            if(nums[i]==0)z++;
        }
        
        vector<int>ans;
        if(z>1)
        {
            vector<int>a(nums.size(),0);
            return a;
        }
        
         for(int i=0;i<nums.size();i++){
             if(nums[i]==0)
             {
                 int m=1;
                 for(int j=0;j<i;j++)m*=nums[j];
                 
                 for(int j=i+1;j<nums.size();j++)m*=nums[j];
                 ans.push_back(m);
                 
             }else
             ans.push_back(mul/nums[i]);
         }
        return ans;
        
    }
};