class Solution {
public:
    
    void solve(vector<int>& candidates,int idx,int n,vector<int>&temp, vector<vector<int>>&ans,int target){
        
        if(target<0 || idx>=n)return ;
        if(target==0){
            ans.push_back(temp);
            return;
        }
        
        //exclude
        solve(candidates,idx+1,n,temp,ans,target);
        //include
        
        temp.push_back(candidates[idx]);
        solve(candidates,idx,n,temp,ans,target-candidates[idx]);
        temp.pop_back();
        
        return;
    }
    
    

    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        solve(candidates,0,candidates.size(),temp,ans,target);
        return ans;
    }
};