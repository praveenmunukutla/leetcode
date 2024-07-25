class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int len = bits.size();
        for(int i = 0; i < len; i++){
            if(i+1< len && bits[i] == 1 && bits[i+1] == 0)i++;
            else if(i+1< len && bits[i] == 1 && bits[i+1] == 1)i++;
            else if(i == len-1 && bits[i] == 0) return true;
        }

        return false;
    }
};