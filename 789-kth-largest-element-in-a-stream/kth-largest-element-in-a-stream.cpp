class KthLargest {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minheap;
    int k;
public:
    KthLargest(int k, std::vector<int>& nums) : k(k) {
        for(int num : nums) {
            if(minheap.size() < k) {
                minheap.push(num);
            } else if (num > minheap.top()) {
                minheap.pop();
                minheap.push(num);
            }
        }
    }
    
    int add(int val) {
        if(minheap.size() < k) {
            minheap.push(val);
        } else if(val > minheap.top()) {
            minheap.pop();
            minheap.push(val);
        }
        return minheap.top();
    }
};
