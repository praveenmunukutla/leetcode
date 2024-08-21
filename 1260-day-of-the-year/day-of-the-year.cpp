class Solution {
public:
    int dayOfYear(string date) {
        vector<int> t = getTokens(date);
        int months[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        int year = t[0];
        bool isleap = (year%4 == 0 && year%100 != 0) || (year%400 == 0);
        int days = 0;
        for(int i = 0; i < t[1]; i++){
            days += months[i];
        }

        days += t[2];

        if(isleap && t[1] > 2) days++;
        
        return days;
    }

    vector<int> getTokens(string date){
        stringstream ss(date);
        string token;
        vector<int> tokens;
        while(getline(ss,token,'-')){
            if(!token.empty())
                tokens.push_back(stoi(token));
        }
        return tokens;
    }
};