class Solution {
    unordered_map<char,int> map;
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(auto ch : magazine)map[ch]++;
        for(auto r : ransomNote){
            map[r]--;
            if(map[r]<0)return false;
        }
        return true;
    }
};