class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n) + to_string(n*2) + to_string(n*3);
        vector<int> check(10,0);
        for(auto c : s){
            check[c-'0']++;
        }

        if(check[0]) return false;
        for(int i = 1; i < 10;i++){
            if(check[i] != 1) return false;
        }
        return true;
    }
};