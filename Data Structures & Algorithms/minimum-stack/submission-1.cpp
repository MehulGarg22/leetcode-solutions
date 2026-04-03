class MinStack {
public:

    stack<int>st;
    stack<int>minSoFarStack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            minSoFarStack.push(val);
        }else{
            st.push(val);
            int minval=min(minSoFarStack.top(),val);
            minSoFarStack.push(minval);
        }
    }
    
    void pop() {
        minSoFarStack.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSoFarStack.top();
    }
};
