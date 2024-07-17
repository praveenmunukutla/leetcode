class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i, j;
        auto fstr = strs[0];
        int checkLen = fstr.length();
        for(i = 1; i < strs.size(); i++){
            auto cstr = strs[i];
            for(j = 0; j < checkLen && cstr[j] != '\0'; j++){
                if(fstr[j] != cstr[j]){
                    checkLen = j;
                    break;
                }
            }
            if(cstr[j] == '\0'){
                checkLen = j;
            }
        }

        return fstr.substr(0, checkLen);
    }
};