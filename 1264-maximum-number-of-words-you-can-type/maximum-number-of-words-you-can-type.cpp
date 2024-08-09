class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        unordered_set<char> uset(brokenLetters.begin(), brokenLetters.end());
        bool considerWord = true;
        for(auto t : text){
            if(considerWord && uset.count(t)){
                considerWord = false;
                continue;
            }

            if(t == ' '){
                if(considerWord) count++;
                considerWord = true;
            }
        }

        if(considerWord) count++;

        return count;
    }
};