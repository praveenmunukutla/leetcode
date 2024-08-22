class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();

        auto g = gcd(len1,len2);

        string s = str2.substr(0, g);

        string s1 = "";
        string s2 = "";
        int g1 = len1/g;
        while(g1--){
           s1 += s;
        }

        int g2 = len2/g;
        while(g2--){
            s2 += s;
        }

        if(s1 == str1 && s2 == str2) return s;

        return "";
    }

    int gcd(int a, int b){
        if(a == 0) return b;
        
        return gcd(b%a, a);
    }
};