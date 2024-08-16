class Solution {
public:
    int countKeyChanges(string s) {
        char prev = tolower(s[0]); int count = 0;
        for(int i = 1; i < s.length(); i++){
            if(tolower(s[i]) != prev) count++;
            prev = tolower(s[i]);
        }
        return count;
    }
};