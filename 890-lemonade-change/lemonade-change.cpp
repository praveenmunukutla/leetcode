class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (auto b : bills) {
            if (b == 5) {
                five++; // Increase count of $5 bills
            } else if (b == 10) {
                if (five == 0) return false; // If no $5 bill is available, return false
                ten++; // Increase count of $10 bills
                five--; // Use one $5 bill as change
            } else { // b == 20
                if (ten > 0 && five > 0) { 
                    ten--; // Use one $10 bill
                    five--; // Use one $5 bill
                } else if (five >= 3) {
                    five -= 3; // Use three $5 bills
                } else {
                    return false; // Cannot provide correct change
                }
            }
        }

        return true; // Successfully provided change for all customers
    }
};
