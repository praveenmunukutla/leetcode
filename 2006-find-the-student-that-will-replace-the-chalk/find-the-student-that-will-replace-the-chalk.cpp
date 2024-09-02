class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) { 
        long long int sum = 0;     
        for(auto c : chalk){
            sum += c;
        }

        k = k%sum;

        for(int i = 0; i < chalk.size();i++){
            int val = chalk[i];
            if(val > k) return i;
            k = k - val;
            if(i == chalk.size()-1){
                i = -1;
            }
        }        

        return 0;        
    }
};