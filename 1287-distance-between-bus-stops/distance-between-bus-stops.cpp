class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(destination < start) swap(start, destination);

        int cw = 0, acw = 0;
        for(int i = start; i < destination; i++)
            cw += distance[i];
        for(int i = destination; i < distance.size(); i++)
           acw += distance[i];

        if(start != 0){
            for(int i = 0; i < start; i++)
                acw += distance[i];
        }

        return min(cw, acw);
    }
};