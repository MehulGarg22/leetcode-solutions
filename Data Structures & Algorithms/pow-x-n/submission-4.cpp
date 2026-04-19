class Solution {
public:
    double myPow(double x, int n) {
        double product=1.00;
        long long exp=n;
        if(n==0) return product;
        if(n==1) return x;
        if(exp<0){
            x=1/x;
            exp=-exp;
        }
        while(exp!=0){
            if(exp%2==0){
                x=x*x;
                exp=exp/2;
            }else{
                product=product*x;
                exp--;
            }
        }
        return product;
    }
};
