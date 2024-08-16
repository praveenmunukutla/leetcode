class Solution {
public:
    int calPoints(vector<string>& operations) {
        // Vector to store the scores. Initialized to 0 for 1001 elements.
        vector<int> score = vector<int>(1001, 0);
        int sIndex = 0; // Index to track the current position in the score vector.

        int sum = 0, num = 0; // Variables to store the sum of points and the current numeric value.
        
        // Loop through each operation in the operations vector.
        for (auto s : operations) {
            if (s == "C") {
                // "C" operation: Invalidate the previous score.
                // Move the index back to remove the last score.
                sIndex = sIndex > 0 ? --sIndex : 0;
            } else if (s == "D") {
                // "D" operation: Double the previous score.
                int val = score[sIndex - 1]; // Get the last valid score.
                score[sIndex++] = val * 2;   // Store the doubled value in the next index.
            } else if (s == "+") {
                // "+" operation: Add the sum of the previous two scores.
                int p1 = sIndex - 1 >= 0 ? score[sIndex - 1] : 0; // Get the last score or 0 if none.
                int p2 = sIndex - 2 >= 0 ? score[sIndex - 2] : 0; // Get the second last score or 0 if none.
                int sum = p1 + p2; // Calculate the sum of the last two scores.
                score[sIndex++] = sum; // Store the sum in the next index.
            } else {
                // Numeric operation: Convert the string to an integer and store it.
                num = stoi(s); // Convert the string to an integer.
                score[sIndex++] = num; // Store the integer in the next index.
            }
        }

        int tsum = 0; // Variable to store the total sum of valid scores.
        // Sum up all the scores in the score vector.
        for (int i = 0; i < sIndex; i++) {
            tsum += score[i];
        }
        return tsum; // Return the total sum of scores.
    }
};
