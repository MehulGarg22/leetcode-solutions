class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0; i<details.size(); i++){
            int a= details[i][11]-'0';
            int b= details[i][12]-'0';

            int c=a*10+b;
            if(c>60) ans++;
        }
        return ans;
    }
};