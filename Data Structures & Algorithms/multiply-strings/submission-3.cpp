class Solution {
public:
    string multiply(string num1, string num2) {
        int s1=num1.size(), s2=num2.size();
        vector<int>res(s1+s2, 0);
        string ans="";
        if(num1=="0" || num2=="0") return "0";
        for(int i=s1-1; i>=0; i--){
            for(int j=s2-1; j>=0; j--){
                int val1=num1[i]-'0';
                int val2=num2[j]-'0';
                int mul=val1*val2;
                int sum=res[i+j+1]+mul;
                res[i+j+1]=sum%10;
                res[i+j]+=sum/10;
            }
        }
        for(int i=0; i<res.size(); i++){
            if(res[i]!=0){

            ans=ans+to_string(res[i]);
            }
            
        }
        return ans;
    }
};
