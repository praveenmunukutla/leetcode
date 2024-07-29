class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> output(num_people, 0);
        int count = 1;
        int index = 0;
        while(candies > 0){
            output[index] += candies > count ? count : candies;
            candies = candies-count;
            
            count++;
            index++;

            if(index >= num_people) index = 0;
        }
        return output;
    }
};