class Solution {
public:
    // string clearDigits(string s) {
    //     string ans = "";
    //     for(auto c : s){
    //         if(isdigit(c)) ans.pop_back();
    //         else ans += c;
    //     }
    //     return ans;
    // }

    string clearDigits(string s) {
        int i = 0, j = 0;
        while(s[i] != '\0'){
            if(!isdigit(s[i])) s[j++] = s[i];
            else j--;
            i++;
        }
        return s.substr(0,j);
    }
};