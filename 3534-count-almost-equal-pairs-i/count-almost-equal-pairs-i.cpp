class Solution {
public:
    int countPairs(vector<int>& nums) {
        int countpairs = 0;
        int len = nums.size();
        for(int i = 0; i < len; i++){
            for(int j = i+1; j < len; j++){

                // when equal;
                if(nums[i] == nums[j]){
                    countpairs++;
                    continue;
                }

                 auto s1 = to_string(nums[i]);
                 auto s2 = to_string(nums[j]);

                 while(s1.length() < s2.length()) s1 = "0"+s1;
                 while(s2.length() < s1.length()) s2 = "0"+s2;
                                
                 int countdiff = 0;
                 vector<int> indexes;
                 for(int k = 0; k < s1.length(); k++){
                    if(s1[k] != s2[k]) {countdiff++;indexes.push_back(k);}
                 }

                 if(countdiff == 2 && indexes.size() == 2){
                    char ch1 = s1[indexes[0]];
                    char ch2 = s2[indexes[0]];

                    char ch3 = s1[indexes[1]];
                    char ch4 = s2[indexes[1]];

                    if(ch1 == ch4 && ch2 == ch3) countpairs++;
                 }                 
            }
        }

        return countpairs;
    }
};