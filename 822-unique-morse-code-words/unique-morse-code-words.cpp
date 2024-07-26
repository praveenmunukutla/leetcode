class Solution {
    vector<string> mcode;
    unordered_set<string> trans;
public:
    Solution(){
        mcode = vector<string>{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    }

    int uniqueMorseRepresentations(vector<string>& words) {
        
        for(auto w : words){
            string code = "";
            for(auto c : w){
                code += mcode[c-'a'];
            }
            trans.insert(code);
        }

        return trans.size();
            
    }
};