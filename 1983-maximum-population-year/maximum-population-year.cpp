class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> years(2051,0);
        for(auto l : logs){
            int s = l[0];
            int e = l[1];
            years[s]++;
            years[e]--;
        }

        int maxValue = 0;
        int ansYear = 0;
        for(int i = 1950; i <= 2050; i++){
            years[i] = years[i]+years[i-1];
            if(years[i] > maxValue){
                maxValue = years[i];
                ansYear = i;
            } 
        }

        return ansYear;
    }
};