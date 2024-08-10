class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0;
        int start = (int)'a';
        for(auto w : word){
            int curr = (int)w;
            ans += min(abs(start-curr), 26-abs((start-curr)));
            start = curr;
        }
        return ans + word.length();
    }
};