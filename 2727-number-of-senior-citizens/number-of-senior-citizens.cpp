class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0; // Initialize a counter to keep track of the number of seniors
        for (auto d : details) { // Iterate through each detail string in the vector
            // Extract the age from the 12th and 13th characters of the string
            int age = (d[11] - '0') * 10 + (d[12] - '0');
            // If the age is greater than 60, increment the counter
            if (age > 60) count++;
        }
        // Return the final count of seniors
        return count;
    }
};
