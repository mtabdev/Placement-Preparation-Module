class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>um;
        for(int i=0;i<nums.size();i++)um.insert(nums[i]);
        
        int c=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(um.find(nums[i]-1)==um.end()){
                int t=0,temp=nums[i];
                while(um.find(temp)!=um.end()){
                    t++;
                    temp++;
                }
                c=max(c,t);
                
            }
            
            
        }
        
        return c;
        
        
    }
};