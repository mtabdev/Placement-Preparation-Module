class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++){
            
            if(um.find(target-nums[i])!=um.end()){
                int a=um[target-nums[i]];
                return {a,i};
            }
            um[nums[i]]=i;
        }
        return {-1,-1};
        
    }
};