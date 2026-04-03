class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>check;
        while(n!=1 && check.find(n) == check.end()){
            int square=0;
            check.insert(n);
            while(n!=0){
                int digit=n%10;
                square=square+ digit*digit;
                n=n/10;
            }
            if(check.find(square)!= check.end()) return false;
            if(n==1) return true;
            n=square;
        }
        return true;
    }
};
