class Solution {
public:
    string reformat(string s) {
        string dig = "";
        string alpha = "";
        for(auto c : s){
            if(isdigit(c)) dig += c;
            else alpha += c;
        }

        int dlen = dig.length();
        int alen = alpha.length();
        int diff = abs(dlen-alen);

        if(diff > 1) return "";

        if(diff == 0){
            string ans = "";
            for(int i = 0; i < dlen; i++){
                ans += string(1,dig[i]) + string(1,alpha[i]);
            }
            return ans;
        }

        string& gstr = dlen > alen ? dig : alpha;
        string& sstr = dlen > alen ? alpha : dig;
        int& slen = dlen > alen ? alen : dlen;
        int& glen = dlen > alen ? dlen : alen;

        string ans = "";   
        for(int i = 0; i < slen; i++){
            ans += string(1,gstr[i]) + string(1,sstr[i]);
        }


        ans += string(1, gstr[glen-1]);
        return ans;
    }
};