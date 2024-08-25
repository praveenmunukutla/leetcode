class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxValue = -1;
        for(auto s : strs){
            bool isdigitOnly = true;
            for(auto c : s){
                if(!isdigit(c))
                    isdigitOnly = false;
            }

            int value = -1;
            if(isdigitOnly){
               value = stoi(s);
            } else {
                value = s.length();
            }

            maxValue = max(maxValue, value);
        }
        return maxValue;
    }
};