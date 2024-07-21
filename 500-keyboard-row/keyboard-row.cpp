class Solution {
    unordered_map<char,int> key;
    vector<string> ans;
public:
    vector<string> findWords(vector<string>& words) {
        string one = "qwertyuiop";
        string two = "asdfghjkl";
        string three = "zxcvbnm";

        for(auto c : one)key[c]=1;
        for(auto c : two)key[c]=2;
        for(auto c : three)key[c]=3;

        int k, i;
        for(auto w : words){
            k = key[tolower(w[0])];
            i = 1;
            for(i = 1; i < w.length(); i++){
                if(key[tolower(w[i])] != k) break;
            }

            if(i >= w.length()) ans.push_back(w);
        }
        
        return ans;
    }
};