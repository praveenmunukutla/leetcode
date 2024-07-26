class Solution {
    unordered_map<string, int> umap;
    unordered_set<string> uset;
public:
    vector<string> getTokens(string s){
        stringstream ss(s);
        vector<string> ans;
        string token;
        while(getline(ss, token, ' ')){
            if(!token.empty()) ans.push_back(token);
        }
        return ans;
    }

    string mostCommonWord(string paragraph, vector<string>& banned) {
        uset.insert(banned.begin(), banned.end());
        // Transform the string to lowercase
        std::transform(paragraph.begin(), paragraph.end(), paragraph.begin(),
                   [](unsigned char c) { 
                    if(!isalnum(c)) return (int)' ';
                    return std::tolower(c); 
                });

        auto tokens = getTokens(paragraph);
        for(auto t : tokens){
            if(!uset.count(t))
                umap[t]++;
        }

        int ans = 0;
        string answord;
        for(auto u : umap){
            cout<<u.first<<" "<<u.second<<endl;
            if(u.second > ans){
                answord = u.first;
                ans = u.second;
            }
        }

        return answord;
    }
};