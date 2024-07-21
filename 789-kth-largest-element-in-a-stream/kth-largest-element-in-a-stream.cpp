class KthLargest {
    priority_queue<int, vector<int>, greater<int>> minheap;
    int k;
public:
    KthLargest(int k, vector<int>& nums):k(k) {
        for(int i = 0; i < nums.size(); i++){
            if(minheap.size() < k){
                minheap.push(nums[i]);
            }else if(nums[i] > minheap.top()){
                minheap.pop();
                minheap.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        if(minheap.size()<k){
            minheap.push(val);
        }else if(val > minheap.top()){
            minheap.pop();
            minheap.push(val);
        }
        return minheap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */