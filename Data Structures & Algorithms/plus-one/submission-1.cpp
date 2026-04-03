class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long number=0;
        vector<int>ans;
        for(int i=0; i<digits.size(); i++){
            number=(number*10)+digits[i];
        }
        number+=1;
        cout<<number;
        while(number!=0){
            ans.push_back(number%10);
            number/=10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
