class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        auto d1 = getDate(date1);
        auto d2 = getDate(date2);
        int months[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        //mistake one year%400 == 0 instead of year%400
        auto isLeap = [&](int year){
            return ((year%4 == 0&&year%100 != 0) || (year%400 == 0));
        };

        auto calculateDays = [&](vector<int> d) {
            int days = 0;
            for(int i = 1971; i < d[0]; i++){
                days += 365;
                if(isLeap(i)) days += 1;
            }
            for(int i = 1; i < d[1]; i++){
                days += months[i];
            }

            if(d[1] > 2 && isLeap(d[0])) days++;

            days += d[2];

            return days;
        };

        return abs(calculateDays(d2) - calculateDays(d1));
    }

    inline vector<int> getDate(string date){
        stringstream ss(date);
        string token;
        vector<int> d;
        //mistake2 : use getline instead of !getline
        while(getline(ss,token,'-')){
            if(!token.empty()){
                d.push_back(stoi(token));
            }
        }
        return d;
    }
};