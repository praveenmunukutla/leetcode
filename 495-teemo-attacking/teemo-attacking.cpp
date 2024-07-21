class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        // Return 0 if there are no attacks
        if (timeSeries.empty()) return 0;
        
        int totalDuration = 0; // Total duration of poisoning
        int endTime = 0;       // End time of the current poisoning interval
        
        // Iterate through each attack time in the timeSeries
        for (int t : timeSeries) {
            totalDuration += duration; // Initially add the full duration
            
            // If the current attack overlaps with the previous one
            if (endTime > t) {
                totalDuration -= (endTime - t); // Subtract the overlapping part
            }
            
            // Update the end time to the end of the current attack's duration
            endTime = t + duration;
        }
        
        return totalDuration; // Return the total poisoned duration
    }
};
