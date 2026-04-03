class MinStack {
public:

    stack<int>st;
    stack<int>st2;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int minValue=INT_MAX;
        while(!st.empty()){
            minValue=min(minValue, st.top());
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
        return minValue;
    }
};
