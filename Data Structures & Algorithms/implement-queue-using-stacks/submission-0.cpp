class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;

    MyQueue() {}
    
    void push(int x) {
        st2.push(x);
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        swap(st1,st2);
    }
    
    int pop() {
        int st1top=st1.top();
        st1.pop();
        return st1top;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */