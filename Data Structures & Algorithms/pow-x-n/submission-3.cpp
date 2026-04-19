class Solution {
public:
    double myPow(double x, int n) {
        double product=1.00;
        int exp=n;
        if(n==0) return product;
        if(n==1) return x;
        if(exp<0){
            x=1/x;
            n=-n;
        }
        while(n!=0){
            if(n%2==0){
                x=x*x;
                n=n/2;
            }else{
                product=product*x;
                n--;
            }
        }
        return product;
    }
};
