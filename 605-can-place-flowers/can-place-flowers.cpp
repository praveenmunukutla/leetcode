class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;  // To keep track of the number of flowers that can be planted
        
        // Iterate through the flowerbed
        for(int i = 0; i < flowerbed.size(); i++){
            int size = flowerbed.size();  // Size of the flowerbed
            
            // Check if current spot is empty and either the first spot or the left spot is empty or out of bounds
            bool canPlaceLeft = flowerbed[i] == 0 && ((i == 0) || (i > 0 && flowerbed[i-1] == 0));
            
            // Check if current spot is empty and either the last spot or the right spot is empty or out of bounds
            bool canPlaceRight = flowerbed[i] == 0 && ((i == size-1) || (i < size-1 && flowerbed[i+1] == 0));
            
            // If both left and right conditions are true, place a flower
            if(canPlaceLeft && canPlaceRight) {
                count++;          // Increment the count of placed flowers
                flowerbed[i] = 1; // Mark the current spot as occupied
            }
        }

        // Check if the number of placed flowers meets or exceeds the required number
        return count >= n;
    }
};
