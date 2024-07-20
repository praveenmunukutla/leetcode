class Solution {
public:
    inline int setbitsfun(int n){
        int count = 0;
        while(n){
            if(n&1)count++;
            n = n >> 1;
        }
        return count;
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<int> setbits(61,0);
        for(int i = 1; i <= 60; i++){
            setbits[i] = setbits[i/2]+(i&1);
        }
         
        vector<string> ans;
        for(int i = 0; i <= 11; i++){
            for(int j = 0; j <= 59; j++){
                if(setbits[i]+setbits[j] == turnedOn){
                    string temp = to_string(i)+":"+(j < 10 ? "0"+to_string(j) : to_string(j));
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};