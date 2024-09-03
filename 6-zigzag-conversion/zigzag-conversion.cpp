class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        
        vector<string> ans(numRows,"");
        bool dirDown = true;
        int index = 0;
        int sindex = 0;
        while(s[sindex] != '\0'){

            ans[index] += string(1, s[sindex]);

            if(index == numRows-1){
                dirDown = false;
            }else if(index == 0){
                dirDown = true;
            }

            if(dirDown){
                index++;
            }else{
                index--;
            }

            sindex++;
        }

        string ansstr ="";
        for(auto a : ans)
            ansstr += a;

        return ansstr;
    }
};