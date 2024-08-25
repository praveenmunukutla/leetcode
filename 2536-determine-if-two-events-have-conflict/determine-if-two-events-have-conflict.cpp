class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        auto time = [&](string s){
             return (((s[0]-'0')*10+(s[1]-'0'))*60) + (((s[3]-'0')*10+(s[4]-'0')));
        };

        auto e1st = time(event1[0]);
        auto e1et = time(event1[1]);

        auto e2st = time(event2[0]);
        auto e2et = time(event2[1]);

        if(e2st > e1et || e1st > e2et) return false;      

        return true;
    }
};