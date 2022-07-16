class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n=strs.size();
        if(n==0)
            return "";
        
        string f=strs[0];
        
        int ans=INT_MAX;
        
        for(int i=1;i<n;i++){
           int c=0,j=0,k=0;
            while(j<f.length() && k<strs[i].length()){
                
                if(f[j]==strs[i][k])c++;
                
                else
                    break;
                
                j++;
                k++;
                
                
            }
              ans=min(ans,c);
        }
        return f.substr(0,ans);
        
    }
};