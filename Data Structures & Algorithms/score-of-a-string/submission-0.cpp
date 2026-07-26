class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=1; i<s.size(); i++){
            int ch1=s[i];
            int ch2=s[i-1];
            int asci1= int(ch1);
            int asci2= int(ch2);
            sum+=abs(asci1-asci2);
        }
        return sum;
    }
};