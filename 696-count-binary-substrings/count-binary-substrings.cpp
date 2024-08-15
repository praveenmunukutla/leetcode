class Solution {
    queue<pair<int,int>> q10; // Queue to store indices of "10" patterns
    queue<pair<int,int>> q01; // Queue to store indices of "01" patterns
public:
    int countBinarySubstrings(string s) {
        int len = s.length();

        // Iterate through the string to find "10" and "01" patterns
        for(int i = 1; i < len; i++){
            if(s[i-1] == '1' && s[i] == '0'){ // Check for "10" pattern
                q10.push({i-1, i});
            } else if(s[i-1] == '0' && s[i] == '1'){ // Check for "01" pattern
                q01.push({i-1, i});
            }
        }

        int count = 0;

        // Process all "10" patterns
        while(!q10.empty()){
            auto p = q10.front(); q10.pop();
            count++; // Each "10" is a valid substring by itself
            int i = p.first - 1, j = p.second + 1;

            // Expand outwards from the "10" pattern as long as it forms a valid substring
            while(i >= 0 && j < len){
                if(s[i] == '1' && s[j] == '0'){ // Check if the expansion still forms "1100"
                    count++;
                    i--; // Move left index further left
                    j++; // Move right index further right
                } else {
                    break; // Stop if the pattern breaks
                }
            }
        }

        // Process all "01" patterns
        while(!q01.empty()){
            auto p = q01.front(); q01.pop();
            count++; // Each "01" is a valid substring by itself
            int i = p.first - 1, j = p.second + 1;

            // Expand outwards from the "01" pattern as long as it forms a valid substring
            while(i >= 0 && j < len){
                if(s[i] == '0' && s[j] == '1'){ // Check if the expansion still forms "0011"
                    count++;
                    i--; // Move left index further left
                    j++; // Move right index further right
                } else {
                    break; // Stop if the pattern breaks
                }
            }
        }

        return count; // Return the total count of valid binary substrings
    }
};
