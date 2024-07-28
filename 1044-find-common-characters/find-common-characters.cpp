class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> umap;
        for(auto c : words[0])
            umap[c]++;

        for(int i = 1; i < words.size(); i++){
            unordered_map<char, int> imap;
            auto w = words[i];
            for(auto c : w)
                imap[c]++;

            for(auto u : umap){
                if(imap.find(u.first) != imap.end()){
                    umap[u.first] = min(u.second, imap[u.first]);
                }
                else 
                    umap[u.first] = 0;
            }
        }

        vector<string> ans;
        for(auto u : umap){
            if(u.second){
                string s;
                s += u.first;
                while(u.second--)
                {
                    ans.push_back(s);
                }
            }
        }

        return ans;        
    }
};