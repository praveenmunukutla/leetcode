class Solution {
    unordered_set<int> uset;
public:
    int countTriples(int n) {
        for(int i = 1; i <= n; i++) uset.insert(i*i);

        int count = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i == j) continue;
                auto sum = (i*i) + (j*j);
                if(uset.count(sum)){
                    count++;
                }
            }
        }

        return count;
    }
};