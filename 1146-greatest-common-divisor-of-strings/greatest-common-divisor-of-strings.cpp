class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1) return "";

        auto g = gcd(str1.length(),str2.length());
        return str2.substr(0, g);
    }

    int gcd(int a, int b){
        if(a == 0) return b;
        
        return gcd(b%a, a);
    }
};