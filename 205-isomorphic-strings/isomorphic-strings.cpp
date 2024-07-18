class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();

        // If lengths are not equal, the strings cannot be isomorphic
        if(len1 != len2) return false;

        // Create two maps to track character mappings from s to t and from t to s
        vector<int> sMap(256, -1);
        vector<int> tMap(256, -1);

        // Traverse the strings
        for(int i = 0; i < len1; i++){
            char sc = s[i];
            char tc = t[i];

            // If sc is already mapped to a different character
            if(sMap[sc] != -1 && sMap[sc] != tc)
                return false;

            // If tc is already mapped to a different character
            if(tMap[tc] != -1 && tMap[tc] != sc)
                return false;

            // Create the mapping
            sMap[sc] = tc;
            tMap[tc] = sc;
        }

        // If we complete the loop without conflicts, the strings are isomorphic
        return true;
    }
};
