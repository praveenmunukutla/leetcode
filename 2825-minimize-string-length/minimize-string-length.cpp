class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> uset;
        for(auto c : s) uset.insert(c);
        return uset.size();
    }
};