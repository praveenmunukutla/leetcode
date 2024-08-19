class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        // List of days of the week starting from January 1, 1971 (Friday)
        vector<string> daysOfWeek = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        
        // Number of days in each month, starting with a dummy zero for easier indexing
        vector<int> months = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Lambda function to check if a year is a leap year
        auto isleap = [&](int year) {
            return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        };

        int tdays = 0; // Total number of days from January 1, 1971, to the given date

        // Calculate the number of days from years between 1971 and the year before the given year
        for (int i = 1971; i < year; i++) {
            tdays += isleap(i) ? 366 : 365; // Add 366 days if leap year, otherwise 365 days
        }

        // Calculate the number of days from months in the given year up to the month before the given month
        for (int i = 1; i < month; i++) {
            tdays += months[i]; // Add the number of days in each month
        }

        // Add an extra day if the given year is a leap year and the given month is after February
        if (month > 2 && isleap(year)) {
            tdays++;
        }

        // Add the number of days in the current month (day - 1 because we start from 0)
        tdays += day - 1;

        // Determine the day of the week by taking modulo 7
        return daysOfWeek[tdays % 7];
    }
};
