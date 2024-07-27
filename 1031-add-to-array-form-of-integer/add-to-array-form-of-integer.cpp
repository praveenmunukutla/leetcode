class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int carry = 0;
        for(int i = num.size()-1;i >= 0 || k > 0 || carry > 0; i--){
             int n = i >= 0 ? num[i] : 0;
             int sum = n + k%10 + carry;
             
             if(i >= 0)
                 num[i] = sum%10;
             else 
                 num.insert(num.begin(), sum%10);
             carry = sum/10;
             k = k/10;
        }

        return num;
    }
};