class Solution {
    unordered_map<char,int> map;
public:
      int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    bool canConstruct(string ransomNote, string magazine) {
        for(auto ch : magazine)map[ch]++;
        for(auto r : ransomNote){
            map[r]--;
            if(map[r]<0)return false;
        }
        return true;
    }
};