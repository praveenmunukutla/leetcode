class Solution {
    unordered_map<char, int> map;
    char ans;
public:
    char findTheDifference(string s, string t) {
        for(auto c : s)map[c]++;
        for(auto c : t){
            map[c]--;
            if(map[c]<0){
                ans = c;break;
            }
        }

        return ans;
    }
};