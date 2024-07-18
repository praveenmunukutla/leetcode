class Solution {
public:
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majorityEle = 0;

        for(auto n : nums){
            if(count == 0)
                majorityEle = n;
            
            (n == majorityEle) ? count++ : count--;
        }

        return majorityEle;
    }
};