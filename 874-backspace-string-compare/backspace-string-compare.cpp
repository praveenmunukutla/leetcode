class Solution {
    stack<char> s1,s2;
public:
    bool backspaceCompare(string s, string t) {
        for(auto c: s){
            if(c == '#'){
                if(s1.size() > 0) s1.pop();
            }else
                s1.push(c);
        }

        for(auto c: t){
            if(c == '#'){
                if(s2.size() > 0) s2.pop();
            }else
                s2.push(c);
        }

        if(s1.size() != s2.size()) return false;

        while(!s1.empty()){
            auto c1 = s1.top();s1.pop();
            auto c2 = s2.top(); s2.pop();
            if(c1 != c2) return false;
        }

        return true;
    }
};