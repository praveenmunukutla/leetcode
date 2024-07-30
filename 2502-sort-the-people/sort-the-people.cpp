class Solution {
    vector<pair<string , int>> people;
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i = 0; i < names.size(); i++){
            people.push_back({names[i], heights[i]});
        }
        sort(people.begin(), people.end(), [](auto& a, auto& b){
            return a.second > b.second;
        });

        vector<string> ans;
        for(auto p : people)
            ans.push_back(p.first);
        
        return ans;
    }
};