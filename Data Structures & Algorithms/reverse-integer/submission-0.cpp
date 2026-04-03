class Solution {
public:
    int reverse(int x) {
        int res = 0;
        
        while (x != 0) {
            // 1. Extract the last digit
            int digit = x % 10;
            
            // 2. The Overflow Radar
            // If res is already bigger than INT_MAX / 10, multiplying by 10 will explode it.
            if (res >= INT_MAX/10 ) return 0;
            if (res <= INT_MIN/10 ) return 0;
            
            // 3. Make room and drop the digit in
            res = (res * 10) + digit;
            
            // 4. Discard the last digit from the original number
            x = x / 10;
        }
        
        return res;
    }
};