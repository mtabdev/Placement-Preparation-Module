class Solution {
public:
    int valuee(char c){
        
        if(c=='I')
            return 1;
        
        else if(c=='V')
            return 5;
        
        else if(c=='X')
            return 10;
        
        
        else if(c=='L')
            return 50;
        
        
        else if(c=='C')
            return 100;
        
        
        else if(c=='D')
            return 500;
        
        else 
            return 1000;
        
    }
    
    
    
    
    
    
    
    
    
    
    int romanToInt(string s) {
        int ans=0;
        
        
        for(int i=0;i<s.length();i++){
            
            if(i+1<s.length() && valuee(s[i+1]) > valuee(s[i])){
                ans=ans+ valuee(s[i+1]) - valuee(s[i]);
                i++;
            }
            
            else{
                
                ans = ans+ valuee(s[i]);
            }
            
            
            
            
        }
        return ans;
        
        
    }
};