class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int c=0,c2=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1){
                ++c2;
            }
            else{
                c=max(c,c2);
                c2=0;
            }
            
        }
        c=max(c,c2);
        return c;
    }
};