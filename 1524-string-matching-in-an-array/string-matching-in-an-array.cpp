class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int len = words.size();
        unordered_set<string> uset;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(i != j){
                    if(words[i].find(words[j]) != string::npos){
                        uset.insert(words[j]);
                    }
                }
            }
        }

        vector<string> res(uset.begin(), uset.end());
        return res;
    }
};