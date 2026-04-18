class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        if(n==1) return true;
        while(n!=1){
            int num=n;
            int sum=0;
            while(num!=0){
                int val=num%10;
                sum=sum+(val*val);
                num=num/10;
            }

            if(s.find(sum)!=s.end()){
                return false;
            }
            if(sum==1) return true;
            s.insert(sum);
            n=sum;
        }
        return false;
    }
};
