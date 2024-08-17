
class Solution {
public:
    string reverseOnlyLetters(string s) {
        auto isAlpha = [&](char ch){
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) return true;
            return false;
        };

        int start = 0, end = s.length()-1;
        while(start <= end){
            if(isAlpha(s[start]) && isAlpha(s[end])){
                swap(s[start], s[end]);
                start++;
                end--;
            }else if(!isAlpha(s[start])){
                start++;
            }else if(!isAlpha(s[end])){
                end--;
            }
        }
        return s;
    }
};