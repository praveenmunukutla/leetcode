class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> cf(26,0);
        int ans = 0;

        for(auto c : chars)cf[c-'a']++;

        for(auto w : words){
            vector<int> wf(26,0);
            int len = 0, i = 0;
            for(auto c : w) {wf[c-'a']++;len++;}
            for(i = 0; i < 26; i++){
                if(wf[i] > cf[i]) break;
            }
            if(i >= 26) ans += len;
        }

        return ans;
    }
};