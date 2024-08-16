class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        // Calculate the total number of apples
        auto s = accumulate(apple.begin(), apple.end(), 0);
        
        // Create a max-heap (priority_queue) from the capacity array
        priority_queue<int> q(capacity.begin(), capacity.end());
        
        // Initialize the count of boxes used to 0
        int count = 0;

        // Process boxes while there are still boxes in the priority queue
        while(!q.empty()){
            // Get the box with the largest capacity
            auto v = q.top(); 
            q.pop();
            
            // Subtract the capacity of the current box from the total apples
            s = s - v;
            
            // Increment the count of boxes used
            count++;

            // If all apples are accommodated, exit the loop
            if(s <= 0) break;
        }

        // Return the total number of boxes used
        return count;
    }
};
