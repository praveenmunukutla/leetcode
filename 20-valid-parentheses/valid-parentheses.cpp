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
                if(sta.empty() || sta.top() != umap[c])
                    return false;
                sta.pop();
            }else{
                sta.push(c);
            }
        }

        return sta.size() == 0;
    }
};