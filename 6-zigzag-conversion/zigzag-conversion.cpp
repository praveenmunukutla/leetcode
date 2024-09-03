class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        vector<string> ans(numRows,"");
        int index = 0;
        int direction = 1;
        
        for(auto c : s){
            ans[index] += string(1, c);
            if(index == numRows-1)
                direction = -1;
            else if(index == 0)
                direction = 1;
            
            index += direction;
        }


        string ansstr ="";
        for(auto a : ans)
            ansstr += a;

        return ansstr;
    }
};