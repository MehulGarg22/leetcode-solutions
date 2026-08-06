class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(int i=0; i<logs.size(); i++){
            if(logs[i]=="../" && st.size()<=1){
                
                return 0;
            }
            else if(logs[i]=="../" && st.size()!=1){
                st.pop();
            }
            else if(logs[i]=="./"){
                continue;
            }else{
                st.push(logs[i]);
            }
        }
        return st.size();
    }
};