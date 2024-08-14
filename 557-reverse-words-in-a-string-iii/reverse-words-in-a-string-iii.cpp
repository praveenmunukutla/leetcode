class Solution {
public:
    string reverseWords(string s) {
        if(s.length() == 0) return "";

        int start = 0, i;
        bool wordStart = true;
        for(i = 0; i < s.length(); i++){
            if(s[i] == ' ' && wordStart){
                wordStart = false;
                reverse(s, start, i-1);
            }else if(s[i] != ' ' && !wordStart){
                wordStart = true;
                start = i;
            }
        }

        reverse(s, start, i-1);
        return s;
    }

    void reverse(string& s, int start, int end){
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};