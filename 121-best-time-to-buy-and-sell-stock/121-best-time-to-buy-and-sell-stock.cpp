class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int cmin=prices[0];
        int mp=0;
        for(int i=1;i<prices.size();i++){
             
            if(prices[i]<cmin)cmin=prices[i];
            
            else
                mp=max(mp,prices[i]-cmin);
            // cmin=1  mp=0  i=2
        }
        return mp;
    }
};