class MinStack {
public:

    stack<int>st;
    stack<int>mini;

    MinStack() {
        
    }
    
    void push(int val) {

        if(mini.empty()){
            mini.push(val);
            st.push(val);
        }else{
            st.push(val);
            int minValue=min(val, mini.top());
            mini.push(minValue);
            
        }
    }
    
    void pop() {
        mini.pop();
        st.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
