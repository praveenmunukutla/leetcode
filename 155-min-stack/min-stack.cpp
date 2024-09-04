class MinStack {
    stack<int> sta;  // Main stack to store all the elements
    stack<int> msta; // Auxiliary stack to store the minimum values

public:
    MinStack() {
        // Constructor: No initialization required as the stacks are automatically initialized
    }
    
    // Push a new element onto the stack
    void push(int val) {
        sta.push(val);  // Push the element onto the main stack

        // If the min stack is empty, push the current element as the minimum
        // Otherwise, push the minimum of the current element and the top of the min stack
        if(msta.empty()){
            msta.push(val);
        } else {
            msta.push(min(val, msta.top()));
        }
    }
    
    // Pop the top element from both the main stack and the min stack
    void pop() {
        sta.pop();
        msta.pop();
    }
    
    // Get the top element of the main stack
    int top() {
        return sta.top();
    }
    
    // Get the minimum element from the min stack
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
