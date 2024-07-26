class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for(int i = 0; i < flowerbed.size(); i++){
            int size = flowerbed.size();
            bool canPlaceLeft = flowerbed[i] == 0 && ((i == 0) || (i > 0 && flowerbed[i-1] == 0));
            bool canPlaceRight = flowerbed[i] == 0 && ((i == size-1) || (i < size-1 && flowerbed[i+1] == 0));

            
            if(canPlaceLeft && canPlaceRight) {
                count++;
                flowerbed[i] = 1;
            }
        }

        return count >= n;
    }
};