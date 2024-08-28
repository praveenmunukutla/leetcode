class Solution {
public:
    string thousandSeparator(int n) {
        if(n == 0) return "0";

        string ans="";
        vector<int> res;
        while(n){
            int d = n%10;
            res.push_back(d);
            n=n/10;
        }

        for(int i = 0, count = 0; i<res.size(); i++,count++){
            if(count != 0 && count%3==0){
                ans = move("."+ans);
            }
            ans = move(to_string(res[i]) + ans);
        }

        return ans;
    }
};