class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) return 0;
        
        int totalDuration = 0;
        int endTime = 0;
        
        for (int t : timeSeries) {
            if (t >= endTime) {
                totalDuration += duration;
            } else {
                totalDuration += (t + duration - endTime);
            }
            endTime = t + duration;
        }
        
        return totalDuration;
    }
};
