class Solution {
     std::unordered_map<std::string, std::string> umap = {
        {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"},
        {"Apr", "04"}, {"May", "05"}, {"Jun", "06"},
        {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"},
        {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
    };
public:
    string reformatDate(string date) {
        auto d = splitString(date);
        string n = d[0];
        n.pop_back();
        n.pop_back();
        if(n.length() < 2){
            n = "0"+n;
        }
        return d[2]+"-"+umap[d[1]]+"-"+n;
    }

    vector<string> splitString(const string& str) {
        vector<string> tokens;
        stringstream ss(str);
        string token;
        
        while (getline(ss, token, ' ')) {
            if (!token.empty()) {
                tokens.push_back(token);
            }
        }
        
        return tokens;
    }

};