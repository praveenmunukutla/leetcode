class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> umap = {
            {')','('},
            {'}','{'},
            {']','['}
        };

        stack<char> sta;
        for(auto c : s){
            if(umap.find(c) != umap.end()){
                if(sta.empty())
                    return false;
                if(sta.top() == umap[c]){
                    sta.pop();
                }else {
                    return false;
                }
            }else{
                sta.push(c);
            }
        }

        return sta.size() == 0;
    }
};