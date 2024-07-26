class Solution {
    string sc;
    int slen;
public:
    string reverseStr(string s, int k) {
        sc = s;
        slen = s.length();
        bool reversestr = true;
        for(int i = 0; i < slen; i = i + k){
            if(reversestr){
                reverse(i, i+k-1);
            }
            reversestr = !reversestr;
        }

        return sc;
    }

    void reverse(int i, int j){
        if(j > slen -1)
            j = slen-1;
        while(i < j){
            char temp = sc[i];
            sc[i] = sc[j];
            sc[j] = temp;
            i++;
            j--;
        }
    }
};