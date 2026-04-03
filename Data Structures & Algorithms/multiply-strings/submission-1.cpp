class Solution {
public:
    string multiply(string num1, string num2) {
        long long val1=stoi(num1);
        long long val2=stoi(num2);
        long long ans=val1*val2;
        return to_string(ans);
    }
};
