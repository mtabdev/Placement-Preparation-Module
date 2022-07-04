class Solution {
public:
    
    double calc(double x, long long n){
        if(n==1)return x;
        if(n==0) return 1;
        if(n%2==0)return calc(x*x,n/2);
        else return (x*calc(x,n-1));
        
    }
    
    double myPow(double x, long long n) {
        int store=n;
        if(n<0)n*=-1;
        double res= calc(x,n);
        if(store<0)return ((double)1/(double)res);
        return res;
    }
};
/*
if(n >= 0) {
            if(n == 0)
                return 1;
            if(n == 1)
                return x;
            if(n % 2 == 0) {
                double temp = myPow(x, n/2LL);
                return (temp*temp);
            }
            else {
                return x*myPow(x, n-1);
            }    
        }
        else {
            return 1.0/myPow(x, -n);
        }
*/