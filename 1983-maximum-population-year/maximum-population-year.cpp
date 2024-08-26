class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> years(2051,0);
        for(auto l : logs){
            int s = l[0];
            int e = l[1];
            for(int i = s; i < e; i++){
                years[i]++;
            }
        }

        int maxValue = 0;
        int ansyear = 0;
        for(int i = 1950; i <= 2050; i++){
            if(years[i] > maxValue){
                maxValue = years[i];
                ansyear = i;
            }
        }

        return ansyear;
    }
};