class Solution {
    unordered_map<char,int> lp;
    unordered_set<char> lpset;
    string ans = "";
    int anslen = INT_MAX;
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        for(auto c : licensePlate){
            c = tolower(c);
            if(c >= 'a' && c <= 'z'){
                lp[c]++;
                lpset.insert(c);
            }
        }


        for(auto w : words){
            unordered_map<char,int> wm;
            for(auto c : w){
                c = tolower(c);
                if(c >= 'a' && c <= 'z')
                    wm[c]++;
            }

            bool matches = true;
            for(auto s : lpset){
                if(wm[s] < lp[s]){
                    matches = false;
                    break;
                }
            }

            if(matches){
                if(ans.empty() && anslen == INT_MAX){
                    ans = w;
                    anslen = w.length();
                }else if(w.length() < anslen){
                     ans = w;
                     anslen = w.length();
                }
            }
        }

        return ans;
    }
};