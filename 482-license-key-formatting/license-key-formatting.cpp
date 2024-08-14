class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans = "";
        int len = s.length();
        int count = 0;

        // Traverse the string in reverse
        for(int i = len - 1; i >= 0; i--) {
            // If the current character is alphanumeric, add it to the answer string
            if(isalnum(s[i])){
                ans += toupper(s[i]);
                count++;

                // Insert a dash after every k characters (but not at the end)
                if(count % k == 0) {
                    ans += '-';
                }
            }
        }

           // If the last character is a dash, remove it
        if(!ans.empty() && ans.back() == '-') {
            ans.pop_back();
        }

        // Reverse the answer to get the final result
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
