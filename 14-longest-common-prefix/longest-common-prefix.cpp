#define min(a,b) ((a)>(b)?(b):(a))

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = INT_MAX;
        for(int i = 0; i < strs.size(); i++){
            minLen = min(minLen, strs[i].length());
        }

        auto& sstr = strs[0];
        for(int i = 1; i < strs.size(); i++){
            auto& cstr = strs[i];
            for(int j = 0; j < minLen; j++){
                if(cstr[j] != sstr[j]){
                    minLen = j;
                    break;
                }
            }
        }

        return sstr.substr(0, minLen);
    }
};