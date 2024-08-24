class Solution {
public:
    // int findNumbers(vector<int>& nums) {
    //     int count = 0;
    //     int tens[]={100000,10000,1000,100,10};
    //     for(auto n : nums){
    //         for(int i = 0, j = 5; i < 5; i++,j--){
    //             if(n/tens[i] != 0){
    //                 //contains j+1 digits;
    //                 if((j+1)%2 == 0)
    //                     count++;
    //                 break;
    //             }
    //         }
    //     }
    //     return count;
    // }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto n : nums){
            int d = 0;
            while(n){
                d++;
                n=n/10;
            }
            if(d%2 == 0) count++;
        }
        return count;
    }
};