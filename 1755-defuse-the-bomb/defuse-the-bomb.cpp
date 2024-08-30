class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int len = code.size();
        if(k == 0) {
            return vector<int>(len, 0);
        }

        vector<int> ans(len, 0);

        if(k > 0) {
            // Sum the next k elements for each index
            for(int i = 0; i < len; i++) {
                for(int j = 1; j <= k; j++) {
                    ans[i] += code[(i + j) % len];
                }
            }
        } else {
            // Sum the previous |k| elements for each index
            for(int i = 0; i < len; i++) {
                for(int j = 1; j <= -k; j++) {
                    ans[i] += code[(i - j + len) % len];
                }
            }
        }

        return ans;
    }
};
