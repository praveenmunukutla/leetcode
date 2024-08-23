class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> umap;
        char ch = -128;
        umap[ch] = -128;

        for(int i = 0; i < order.size(); i++)umap[order[i]] = i;

        for(int i = 1; i < words.size(); i++){
            auto& w1 = words[i-1];
            auto& w2 = words[i];

            int len1 = w1.length();
            int len2 = w2.length();

            int maxLen = max(len1, len2);
            for(int j = 0; j < maxLen; j++){
                char& c1 = j < len1 ? w1[j] : ch;
                char& c2 = j < len2 ? w2[j] : ch;

                if(umap[c1] == umap[c2]) continue;
                if(umap[c1] > umap[c2]) return false;
                if(umap[c1] < umap[c2]) break;
            }
        }

        return true;
    }
};