class Solution {
public:
    int percentageLetter(string s, char letter) {
        int len = s.length();
        int count = 0;
        for(auto c : s) {
            if(c == letter) 
                count++;
        }

        return floor(((double)count/len)*100);
    }
};