class Solution {
public:
    double calculateTax(vector<vector<int>>& bkt, int income) {
        int prevTaxBracket = 0;
        double tax = 0;
        for(auto& b : bkt){
            auto taxBracket = b[0];
            auto taxSlab = b[1];

            if(income == 0) break;
            auto amt = taxBracket - prevTaxBracket;
            auto tamt = 0;
            if(income >= amt){
                tamt = amt;
                income = income - amt;
            }else {
                tamt = income;
                income = 0;
            }
            cout<<tamt<<" "<<taxSlab<<endl;
            tax += (double)((tamt*taxSlab)/100.0);
            prevTaxBracket = taxBracket;
        }

        return tax;
    }
};