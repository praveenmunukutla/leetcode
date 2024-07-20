class Solution {
    unordered_map<char,int> map;
public:
    int firstUniqChar(string s) {
        for(auto c : s)map[c]++;
        for(int i = 0; s[i] != '\0'; i++){
            if(map[s[i]] == 1)
                return i;
        }
        return -1;
    }
};