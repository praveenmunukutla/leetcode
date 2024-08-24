class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        // Array holding the number of days in each month (0-index is unused)
        int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Lambda to split date string and return month and day as integers
        auto getTokens = [&](string date) {
            stringstream ss(date); // String stream for tokenization
            string token;
            vector<int> tokens;
            while (getline(ss, token, '-')) { // Split by '-'
                if (!token.empty()) {
                    tokens.push_back(stoi(token)); // Convert to integer and store
                }
            }
            return tokens;
        };

        // Lambda to calculate the total number of days from the start of the year to the given date
        auto numberOfDays = [&](vector<int> tokens) {
            int days = 0;
            for (int i = 1; i < tokens[0]; i++) days += months[i]; // Sum days of complete months
            days += tokens[1]; // Add days in the current month
            return days;
        };

        // Calculate the start and end dates for Alice and Bob in terms of days from the start of the year
        auto aliceStartDate = numberOfDays(getTokens(arriveAlice));
        auto aliceEndDate = numberOfDays(getTokens(leaveAlice));
        auto bobStartDate = numberOfDays(getTokens(arriveBob));
        auto bobEndDate = numberOfDays(getTokens(leaveBob));

        // Check for non-overlapping cases
        if (bobStartDate > aliceEndDate || aliceStartDate > bobEndDate) return 0;

        // Calculate and return the number of overlapping days
        return max(0, min(bobEndDate, aliceEndDate) - max(aliceStartDate, bobStartDate) + 1);
    }
};
