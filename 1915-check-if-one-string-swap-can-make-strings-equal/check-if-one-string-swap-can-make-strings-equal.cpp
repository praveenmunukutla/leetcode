class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length() != s2.length()) return false;
        
        vector<pair<char,char>> pa;
        int i = 0, count = 0;
        while(s1[i] != '\0'){
            if(s1[i] != s2[i]){
                pa.push_back({s1[i], s2[i]});
                count++;
            }
            i++;
        }

        if(count == 0) return true;

        if(count > 2 || count == 1) return false;

        if(count == 2) {
            if(pa[0].first != pa[1].second || pa[0].second != pa[1].first) return false;
        }
         
        return true;
    }
};