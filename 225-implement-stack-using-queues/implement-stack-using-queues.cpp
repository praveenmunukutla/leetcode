#include <queue>
using namespace std;

class MyStack {
    queue<int> q1; // Single queue used to implement the stack
    
public:
    // Constructor to initialize the stack
    MyStack() { }
    
    // Pushes element x onto the stack.
    void push(int x) {
        q1.push(x); // Enqueue the new element

        // Rotate the queue to place the new element at the front
        for(int i = 0; i < q1.size() - 1; i++) {
            q1.push(q1.front()); // Move the front element to the back
            q1.pop(); // Remove the front element from the queue
        }
    }
    
    // Removes the element on top of the stack and returns it.
    int pop() {
        int val = q1.front(); // Get the front element of the queue
        q1.pop(); // Remove the front element from the queue
        return val; // Return the removed element
    }
    
    // Returns the element on top of the stack without removing it.
    int top() {
        return q1.front(); // Return the front element of the queue
    }
    
    // Checks if the stack is empty.
    bool empty() {
        return q1.empty(); // Stack is empty if the queue is empty
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
