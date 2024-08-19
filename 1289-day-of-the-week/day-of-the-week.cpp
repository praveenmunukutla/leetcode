class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> daysOfWeek = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        vector<int> months = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        auto isleap =[&](int year){
            return (year%4 == 0 && year%100 != 0) || (year%400 == 0);
        };

        int tdays = 0;
        for(int i = 1971; i < year; i++){
            tdays += isleap(i) ? 366 : 365;
        }


        for(int i = 1; i < month; i++){
            tdays += months[i];
        }
        if(month > 2 && isleap(year)) tdays++;

        tdays += day - 1;

        return daysOfWeek[tdays%7];
    }
};