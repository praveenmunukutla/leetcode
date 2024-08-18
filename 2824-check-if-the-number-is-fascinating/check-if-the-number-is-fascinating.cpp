class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n) + to_string(n*2) + to_string(n*3);
        if(s.length() > 9) return false;
        sort(s.begin(), s.end());
        return s == "123456789";
    }
};