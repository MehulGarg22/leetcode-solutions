class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long expo=n;
        if(expo==0){
            return 1.00;
        }
        
        if(expo==1){
            return x;
        }
        
        if(expo<0){
            x=1/x;
            expo=-expo;
        }
        while(expo!=0){
            ans=ans*x;
            expo--;
        }

        return ans;
    }
};
