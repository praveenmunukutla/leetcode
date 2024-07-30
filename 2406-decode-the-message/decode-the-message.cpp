class Solution {
    unordered_map<char, char> umap;
public:
    string decodeMessage(string key, string message) {
        
        umap[' '] = ' ';
        for(int i = 0, index = 0; key[i] != '\0'; i++){
            if(umap.find(key[i]) == umap.end()){
                umap[key[i]] = 'a'+index;
                index++;
            }
        }

        string ans = "";
        for(auto m : message){
            ans += umap[m];
        }

        return ans;
    }
};