class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& nums) {
        // Sort the array using a custom comparator
        std::sort(nums.begin(), nums.end(), [](auto a, auto b) {
            // Custom comparator: sorts by parity (even numbers before odd numbers)
            return (a % 2) < (b % 2);
        });
        // Return the sorted array
        return nums;
    }
};