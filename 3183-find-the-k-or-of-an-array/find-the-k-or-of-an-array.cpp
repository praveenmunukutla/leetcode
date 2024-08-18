class Solution {
public:
    int findKOr(vector<int>& nums, int k) {   
        vector<int> res(32,0);
        for(int i = 0; i < 32; i++){
            int count = 0;
            for(auto& n : nums){
                auto bit = n & 1;
                n = n >> 1;
                if(bit) count++;
                if(count >= k) {res[i] = 1;}                
            }
        }

        int ans = 0;
        for(int i = 0; i < 32; i++){
            if(res[i])
                ans += (1<<i);
        }

        return ans;
        
    }
};