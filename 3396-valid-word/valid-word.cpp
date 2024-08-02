class Solution {
    unordered_set<char> uset = {'a','e','i','o','u'};
public:
    bool isValid(string word) {
        int len = word.length();
        bool isalnumeric = true;
        bool containsVowels = false, containsConsonant = false;

        for(auto c : word){
            c = tolower(c);
            if(!isalnum(c)) isalnumeric = false;
            else if(uset.count(c)) containsVowels = true;
            else if(!isdigit(c) && isalnum(c) && uset.find(c) == uset.end()) containsConsonant = true;
        }
        
        return len>=3 && isalnumeric && containsVowels && containsConsonant;
    }
};