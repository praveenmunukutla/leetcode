class Solution {
    stack<char> st;
public:
    string clearDigits(string s) {
        for(auto c : s)
            (c >= '0' && c <='9') ? st.pop() : st.push(c);

        string ans="";
        while(!st.empty()){
            ans.insert(ans.begin(), st.top());
            st.pop();
        }

        return ans;
    }
};