class Solution {
public:
    int alternateDigitSum(int n) {
        int tens[] = {1000000000, 100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1};
        bool ispositive = true;
        bool didstart = false;
        int sum = 0;
        for(int i = 0; i < 10;i++){
            if(n/tens[i] == 0) {
                if(didstart)
                    ispositive = !ispositive;
                continue;
            }
            else{
                didstart = true;
                int d = n / tens[i];
                sum += ispositive ? d : (d*-1);
                cout<<sum<<" "<<d<<endl;
                ispositive = !ispositive;
                n = n%tens[i];
            }
        }
        return sum;        
    }
};