class Solution {
public:
 
    
   void generate(  vector<string>&v,string &s,int o,int c){
       
       if(o==0 && c==0){
           v.push_back(s);
           return;
       }
       
       if(o>0){
           s.push_back('(');
           generate(v,s,o-1,c);
           s.pop_back();
       }
       
       
           if(o<c){
                s.push_back(')');
               generate(v,s,o,c-1);
               s.pop_back();
           }
           
       
       
       
   }
    
    
    
    vector<string> generateParenthesis(int n) {
        
        vector<string>v;
        string s="";
        generate(v,s,n,n);
        return v;
        
    }
};