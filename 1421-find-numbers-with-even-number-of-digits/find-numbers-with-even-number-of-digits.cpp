class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int tens[]={100000,10000,1000,100,10};
        for(auto n : nums){
            for(int i = 0, j = 5; i < 5; i++,j--){
                if(n/tens[i] != 0){
                    // cout<<n<<" "<<tens[i]<<" "<<j+1<<endl;
                    //contains j digits;
                    if((j+1)%2 == 0)
                        count++;
                    break;
                }
            }
        }
        return count;
    }
};