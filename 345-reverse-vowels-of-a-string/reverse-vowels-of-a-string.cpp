class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'
           )
           return true;
        return false;
    }

    string reverseVowels(string s) {
        int i = 0, j = s.length()-1;
        while(i < j){
            
            while(i <  j && !isvowel(s[i])){
                i++;
            }
            while(i <  j && !isvowel(s[j])){ // i < j biggest mistake; always check for boundaries in string ops
                j--;
            }

            if(i > j) break; // mistake - should have checked for this.

            swap(s[i],s[j]);
            i++,j--;
        }

        return s;
    }
};