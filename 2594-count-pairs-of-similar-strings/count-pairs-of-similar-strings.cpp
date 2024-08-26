#include <vector>
#include <string>
#include <unordered_set>

class Solution {
public:
    int similarPairs(std::vector<std::string>& words) {
        int count = 0;
        int len = words.size();

        for(int i = 0; i < len; i++){
            for(int j = i + 1; j < len; j++){
                auto& s1 = words[i];
                auto& s2 = words[j];
                std::unordered_set<char> sset1(s1.begin(), s1.end());
                std::unordered_set<char> sset2(s2.begin(), s2.end());
                 // Directly compare the unordered sets
                if(sset1 == sset2) {
                    count++;
                }
            }
        }

        return count;
    }
};
