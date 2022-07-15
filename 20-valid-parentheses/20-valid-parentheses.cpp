class Solution {
public:
   
    bool compare(char a,char b){
        
        if(a=='}'&&b=='{' || a==']'&&b=='[' ||a==')'&&b=='('){
            return true;
        }
        return false;
        
        
    }
    
    
    
    bool isValid(string s) {
        
        
        stack<char>st;
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            }
            else{
                
                if(st.empty()){
                    return false;
                }
                
                if(compare(s[i] , st.top())==false){
                    return false;
                }
                else{
                    st.pop();
                }
                
                
                
                
            }
            
            
            
            
        }
        
        if(st.empty()){
            return true;
        }
        return false;
        
        
        
    }
};