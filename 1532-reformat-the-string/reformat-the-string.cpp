class Solution {
public:
    string reformat(string s) {
        string dig = "";
        string alpha = "";
        
        // Separate the digits and letters.
        for(auto c : s){
            if(isdigit(c)) dig += c;
            else alpha += c;
        }

        int dlen = dig.length();
        int alen = alpha.length();
        int diff = abs(dlen - alen);

        // If the difference is greater than 1, return an empty string.
        if(diff > 1) return "";

        // If digits and letters are equal in length, alternate them directly.
        if(diff == 0){
            string ans = "";
            for(int i = 0; i < dlen; i++){
                ans += string(1, dig[i]) + string(1, alpha[i]);
            }
            return ans;
        }

        // Determine the longer and shorter string between digits and letters.
        string& gstr = dlen > alen ? dig : alpha;
        string& sstr = dlen > alen ? alpha : dig;
        int& slen = dlen > alen ? alen : dlen;
        int& glen = dlen > alen ? dlen : alen;

        string ans = "";   
        
        // Alternate characters from the longer and shorter strings.
        for(int i = 0; i < slen; i++){
            ans += string(1, gstr[i]) + string(1, sstr[i]);
        }

        // Add the last character from the longer string.
        ans += string(1, gstr[glen-1]);
        
        return ans;
    }
};
