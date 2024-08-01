class Solution {
public:
    string getSmallestString(string s) {
        int len = s.length();
        for(int i = 0; i < len-1; i++){
            int fi = s[i]-'0';
            int se = s[i+1]-'0';
            if((fi%2==1) && (se%2==1)){
                //odd
                if(fi > se){
                    swap(s[i], s[i+1]);
                    return s;
                }

            }else if((fi%2 == 0) && (se%2 == 0)) {
                //even
                if(fi > se)
                {
                    swap(s[i], s[i+1]);
                    return s;
                }
            }
        }
        return s;
    }
};