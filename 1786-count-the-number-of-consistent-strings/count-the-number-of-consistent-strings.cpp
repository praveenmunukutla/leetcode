class Solution {
    unordered_set<char> uset;
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        for(auto c : allowed) uset.insert(c);

        int count = 0;
        for(auto w : words){
            int i = 0;
            for(i = 0; w[i] != '\0'; i++){
                if(uset.find(w[i]) == uset.end()) break;
            }

            if(w[i] == '\0') count++;
        }

        return count;
    }
};