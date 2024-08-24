class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int index = 0;
        for(auto w : words){
            for(auto c : w){
                if(c == x) {
                    ans.push_back(index);
                    break;
                }
            }
            index++;
        }
        return ans;
    }
};