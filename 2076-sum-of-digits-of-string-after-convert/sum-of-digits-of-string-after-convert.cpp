class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for(auto s1 : s)
             num += to_string((s1-'a')+1);

        int sum;
        while(k){
            sum = 0;
            string numd = "";
            for(auto n : num){
                sum += (n-'0');
            }

            num = to_string(sum);
            k--;
        }

        return sum;        
    }
};