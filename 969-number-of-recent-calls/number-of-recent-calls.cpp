class RecentCounter {
    deque<int> dq;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int lastTime = t-3000;
        while(dq.size() && dq.back() < lastTime){
             dq.pop_back();            
        }
        dq.push_front(t);
        return dq.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */