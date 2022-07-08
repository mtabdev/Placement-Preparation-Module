class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size(),k=0,idx=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
            
                k++;
            
            }
            else{
                
                nums[idx]=nums[i];
                idx++;
            }
        }
        return n-k;
        
    }
};