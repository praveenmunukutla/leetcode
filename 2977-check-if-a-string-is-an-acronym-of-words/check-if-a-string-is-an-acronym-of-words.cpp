class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {        
        if(s.length() != words.size()) return false;

        int index = 0;
        for(auto c : s){
            if(words[index][0] != c) return false;
            index++;
        }

        return true;
    }
};