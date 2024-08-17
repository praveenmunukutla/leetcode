class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int nlen = name.length();
        int tlen = typed.length();

        int nindex = 0, tindex = 0;
        while(nindex < nlen){

            char ch = name[nindex];
            char tch = typed[tindex];

            if(ch != tch) return false;

            int count = 0;
            while(nindex < nlen && ch == name[nindex]){
                count++;
                nindex++;
            }
            
            int tcount = 0;
            while(tindex < tlen && ch == typed[tindex]){
                tcount++;
                tindex++;
            }
           
            if(tcount < count) return false;
        }

        if(tindex < tlen) return false;

        return true;
    }
};