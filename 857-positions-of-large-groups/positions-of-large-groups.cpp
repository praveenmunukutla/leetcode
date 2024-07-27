class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;

        int len = s.length();
        int i = 0;
        while(s[i]!='\0'){
            char ch = s[i];
            int start = i;
            int j = i+1, count = 1;
            while(j < len && s[j] == ch){
                j++;
                count++;
            }
            if(count >= 3)
                ans.push_back({start, j-1});
            i = j;
        }

        return ans;
    }
};