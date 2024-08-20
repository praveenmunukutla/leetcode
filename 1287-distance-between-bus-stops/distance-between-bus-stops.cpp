class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        // Ensure start is less than destination for simplicity
        if(destination < start) swap(start, destination);

        int cw = 0, acw = 0;  // Initialize clockwise (cw) and anti-clockwise (acw) distances

        // Calculate clockwise distance
        for(int i = start; i < destination; i++)
            cw += distance[i];

        // Calculate anti-clockwise distance from destination to end of the array
        for(int i = destination; i < distance.size(); i++)
            acw += distance[i];

        // Add the distance from start of the array to the start index
        if(start != 0) {
            for(int i = 0; i < start; i++)
                acw += distance[i];
        }

        // Return the minimum distance between clockwise and anti-clockwise paths
        return min(cw, acw);
    }
};
