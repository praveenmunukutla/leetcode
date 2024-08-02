#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Function to find the minimum number of chairs required at any time
    int minimumChairs(string s) {
        int maxChairs = 0;  // Variable to keep track of the maximum number of chairs needed
        int count = 0;     // Variable to keep track of the current number of occupied chairs

        // Iterate through each character in the string
        for(auto c : s){
            if(c == 'E') {
                // When encountering 'E', a new chair is occupied
                count++;
            } else if(c == 'L') {
                // When encountering 'L', a chair is freed
                count--;
            }

            // Update maxChairs with the maximum value between the current maxChairs and count
            maxChairs = max(maxChairs, count);
        }

        // Return the maximum number of chairs needed at any point in time
        return maxChairs;
    }
};
