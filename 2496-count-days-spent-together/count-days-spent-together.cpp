class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int months[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        auto getTokens = [&](string date){
            stringstream ss(date);
            string token;
            vector<int> tokens;
            while(getline(ss,token,'-')){
                if(!token.empty()){
                    tokens.push_back(stoi(token));
                }
            }
            return tokens;
        };
        auto numberOfDays = [&](vector<int> tokens){
            int days = 0;
            for(int i = 1; i < tokens[0]; i++) days += months[i];
            days += tokens[1];
            return days;
        };

        auto aliceStartDate = numberOfDays(getTokens(arriveAlice));
        auto aliceEndDate = numberOfDays(getTokens(leaveAlice));

        auto bobStartDate = numberOfDays(getTokens(arriveBob));
        auto bobEndDate = numberOfDays(getTokens(leaveBob));
 
        vector<int> days(366,0);
        int count = 0;
        for(int i = aliceStartDate; i <= aliceEndDate; i++)days[i]++;
        for(int i = bobStartDate; i <= bobEndDate; i++)days[i]++;
        for(int i = 1; i < 366; i++){
            if(days[i] == 2) count++;
        }

        return count;
        
        
    }
};