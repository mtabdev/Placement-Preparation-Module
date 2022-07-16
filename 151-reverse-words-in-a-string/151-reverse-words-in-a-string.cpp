
class Solution {
public:
    string reverseWords(string str) {
       
        int n=str.size();
        string res,temp;
        int i=0,j;
        while(i<n){
            
            while(i<n && str[i]==' ')i++;
            if(i>=n)break;
            j=i+1;
            while(j<n && str[j]!=' ')j++;
            temp=str.substr(i,j-i);
            if(res.size()==0)res=temp;
            else
            res=temp+" "+res;
            i=j+1;
        }
        return res;
    }
};