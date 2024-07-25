class Solution {
    char ans='!';
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(auto ch: letters){
            if(ans == '!'){
                if(ch > target)
                    ans = ch;
            }else {
                if(ch > target && ch < ans)
                    ans = ch;
            }
        }

        return ans == '!' ? letters[0] : ans;
    }
};