class Solution {
    vector<int> vec;
public:
    Solution():vec(26,0){}

    bool isAnagram(string s, string t) {
        for(auto c : s) vec[c-'a']++;
        for(auto c : t) vec[c-'a']--;
        
        for(auto v : vec) {
            if(v != 0) return false;
        }
        
        return true;
    }
};