class Solution {
    stack<int> sta;
public:
    string removeOuterParentheses(string s) {
        string ans;
        for(auto c : s){
            if(c == ')' && sta.size() == 1 && sta.top() == '('){
                sta.pop();
            }else if(c == '(' && sta.empty()){
                sta.push('(');
            }else{
                if(c == '(')
                    sta.push('(');
                else if(c == ')' && sta.top() == '('){
                    sta.pop();
                }
                ans += c;
            }
        }

        return ans;
    }
};