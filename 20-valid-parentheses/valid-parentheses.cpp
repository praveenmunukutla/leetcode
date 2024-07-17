class Solution {
    unordered_map<char,char> map = {{'}','{'},{')','('},{']','['}};
    stack<char> sta;
public:
    bool isValid(string s) {
        for(auto c: s){
            if(map.find(c) == map.end()){
                sta.push(c);
            }else {
                if(!sta.empty() && sta.top() == map[c]){
                    sta.pop();
                }
                else
                    return false;
            }
        }

        return sta.size() == 0;
    }
};