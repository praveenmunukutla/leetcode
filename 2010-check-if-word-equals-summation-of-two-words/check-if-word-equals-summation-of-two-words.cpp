class Solution {
    unordered_map<char,string> umap{{'a',"0"},{'b',"1"},{'c',"2"},{'d',"3"},{'e',"4"},{'f',"5"},{'g',"6"},{'h',"7"},{'i',"8"},{'j',"9"}};
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string ifirstWord = "";
        for(auto c : firstWord){
            ifirstWord += umap[c];
        }

        string isecondWord = "";
        for(auto c : secondWord){
            isecondWord += umap[c];
        }

        string itargetWord = "";
        for(auto c : targetWord){
            itargetWord += umap[c];
        }

        return stoi(ifirstWord) + stoi(isecondWord) == stoi(itargetWord);
    }
};