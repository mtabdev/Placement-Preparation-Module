class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int c1=0,c2=0;
        int ele1=-1,ele2=-1;
        
        for(int ele:nums){
            if(ele==ele1)c1++;
            else if(ele==ele2)c2++;
            else if(c1==0){
                
                ele1=ele;
                c1=1;
            }
            else if(c2==0){
                
                ele2=ele;
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
       c1=0,c2=0;
        for(int ele:nums){
            if(ele==ele1)c1++;
           if(ele==ele2)c2++;
        }
       if(c1>(nums.size()/3))ans.push_back(ele1);
        
       if(c2>(nums.size()/3))ans.push_back(ele2);
        if(ans.size()==2 && ans[0]==ans[1])ans.pop_back();
        return ans;
        
    }
};