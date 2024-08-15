class Solution {
    queue<pair<int,int>> q10;
    queue<pair<int,int>> q01;
public:
    int countBinarySubstrings(string s) {
        int len = s.length();
        for(int i = 1; i < s.length(); i++){
            if(s[i-1]=='1'&&s[i]=='0'){
                q10.push({i-1,i});
            }else if(s[i-1]=='0'&&s[i]=='1'){
                q01.push({i-1,i});
            }
        }

        int count = 0;

        while(!q10.empty()){
            auto p = q10.front();q10.pop();
            count++;
            int i = p.first-1, j = p.second+1;
            while(i >= 0 && j < len){
                if(s[i] == '1' && s[j] == '0'){
                    count++;
                    i--;
                    j++;
                }else
                    break;
            }
        }

        while(!q01.empty()){
            auto p = q01.front();q01.pop();
            count++;
            int i = p.first-1, j = p.second+1;
            while(i >= 0 && j < len){
                if(s[i] == '0' && s[j] == '1'){
                    count++;
                    i--;
                    j++;
                }else
                    break;
            }
        }

        return count;
    }
};