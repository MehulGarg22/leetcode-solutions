class Solution {
public:
    string multiply(string num1, string num2) {
        int val1=stoi(num1);
        int val2=stoi(num2);
        int ans=val1*val2;
        return to_string(ans);
    }
};
