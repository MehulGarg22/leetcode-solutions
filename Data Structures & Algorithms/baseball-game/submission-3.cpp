class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.push(first);
                int third=first+second;
                st.push(third);
            }else if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                int first=st.top();
                st.push(first*2);
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};