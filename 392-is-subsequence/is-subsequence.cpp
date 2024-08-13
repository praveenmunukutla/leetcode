class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tIndex = -1;
        for(auto c : s){
            for(tIndex = tIndex+1;tIndex < t.length(); tIndex++){
                if(t[tIndex] == c) {
                    break;
                }
            }
            if(tIndex >= t.length()) return false;
        }

        return true;
    }
};