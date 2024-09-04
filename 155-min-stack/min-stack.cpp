class MinStack {
    stack<int> sta;
    stack<int> msta;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        sta.push(val);

        if(msta.empty()){
            msta.push(val);
        }else{
            val < msta.top() ? msta.push(val) : msta.push(msta.top());
        }
    }
    
    void pop() {
        sta.pop();
        msta.pop();
    }
    
    int top() {
        return sta.top();
    }
    
    int getMin() {
        return msta.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */