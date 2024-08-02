class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int len = hours.size(), count = 0;
        for(int i = 0; i < len; i++){
            for(int j = i+1; j < len; j++){
                unsigned long long h1 = hours[i];
                unsigned long long h2 = hours[j];
                unsigned long long sum = h1 + h2;
                if(sum%24 == 0) count++;
            }
        }
        return count;
    }
};