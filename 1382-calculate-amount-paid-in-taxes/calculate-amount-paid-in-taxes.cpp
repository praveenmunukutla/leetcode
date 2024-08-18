class Solution {
public:
    double calculateTax(vector<vector<int>>& bra, int income) {
        if (income <= 0) return 0.0;  // Handle edge case where income is zero or negative

        double tax = 0.0;
        int previousLimit = 0;  // Track the lower bound of the previous slab

        for (const auto& slab : bra) {
            int slabLimit = slab[0];
            int slabRate = slab[1];
            
            if (income > slabLimit) {
                // Calculate tax for the full slab range
                tax += (slabLimit - previousLimit) * (slabRate / 100.0);
                previousLimit = slabLimit;
            } else {
                // Calculate tax for the remaining income in the current slab
                tax += (income - previousLimit) * (slabRate / 100.0);
                return tax;  // Income is exhausted
            }
        }

        return tax;  // If income exceeds all slabs, return total tax
    }
};
