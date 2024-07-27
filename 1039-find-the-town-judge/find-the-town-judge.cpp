class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // If there's only one person and no trust relationships, that person is the judge.
        if (n == 1 && trust.size() == 0) return 1;
        
        // Map to store trust counts for each person
        unordered_map<int, vector<int>> map;
        
        // Iterate over each trust relationship
        for (auto tr : trust) {
            int f = tr[0]; // the person who trusts
            int s = tr[1]; // the person being trusted

            // Increment the count of people who trust person 's'
            if (map.find(s) == map.end()) {
                map[s] = {1, 0}; // {inward trust count, outward trust count}
            } else {
                map[s][0]++;
            }

            // Increment the count of people person 'f' trusts
            if (map.find(f) == map.end()) {
                map[f] = {0, 1}; // {inward trust count, outward trust count}
            } else {
                map[f][1]++;
            }
        }

        // Check for the judge
        for (auto u : map) {
            // Judge should be trusted by (n-1) people and trust no one
            if (u.second[0] == n - 1 && u.second[1] == 0) return u.first;
        }

        return -1; // If no judge is found
    }
};
