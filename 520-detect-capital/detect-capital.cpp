class Solution {
public:
    bool detectCapitalUse(string word) {

        if(word.length() == 1) return true;


        bool hasCapital = false, hasLower = false;
        for(int i = 1; word[i] != '\0'; i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                hasCapital = true;
            }else if(word[i] >= 'a' && word[i] <= 'z'){
                hasLower = true;
            }
        }

        bool isFirstCapital = word[0] >= 'A' && word[0] <= 'Z';

        if(isFirstCapital == true && hasCapital == true && hasLower == false) return true;

        if(isFirstCapital == false && hasCapital == false && hasLower == true) return true;

        if(isFirstCapital == true && hasCapital == false && hasLower == true) return true;
        

        return false;
    }
};