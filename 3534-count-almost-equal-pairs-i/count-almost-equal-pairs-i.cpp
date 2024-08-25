class Solution {
public:
    int countPairs(vector<int>& nums) {
         int len = nums.size();
         int countpairs = 0;
         for(int i = 0; i < len; i++){
            for(int j = i+1; j < len; j++){
                if(nums[i] == nums[j] || check(nums[i], nums[j]))
                    countpairs++;
            }
         }
         return countpairs;
    }

    bool check(int a1, int b1){
          string s1 = to_string(a1);
          string s2 = to_string(b1);
          while(s1.length() < s2.length()) s1 = "0"+s1;
          while(s2.length() < s1.length()) s2 = "0"+s2;

          int diff = 0, a = -1, b = -1;
          for(int i = 0; i < s1.length(); i++){
            if(s1[i] != s2[i]){
                diff++;
                if(diff == 1) a= i;
                else if(diff == 2) b = i;
                else return false;
            }
          }
       
          if(diff == 2){
            swap(s1[a],s1[b]);
          }
          
          return s1 == s2;
    }
};