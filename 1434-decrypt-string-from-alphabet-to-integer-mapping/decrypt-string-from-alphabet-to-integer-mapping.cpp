class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        int len = s.length();
        for(int i = 0; i < s.length(); i++){
            if(i < len -2 && s[i] == '1' && s[i+1] == '0' && s[i+2] == '#')
                {ans += 'j';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '1' && s[i+2] == '#')
                {ans += 'k';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '2' && s[i+2] == '#')
                {ans += 'l';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '3' && s[i+2] == '#')
                {ans += 'm';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '4' && s[i+2] == '#')
                {ans += 'n';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '5' && s[i+2] == '#')
                {ans += 'o';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '6' && s[i+2] == '#')
                {ans += 'p';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '7' && s[i+2] == '#')
                {ans += 'q';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '8' && s[i+2] == '#')
                {ans += 'r';i+=2;}
            else if(i < len -2 && s[i] == '1' && s[i+1] == '9' && s[i+2] == '#')
                {ans += 's';i+=2;}
            else if(i < len -2 && s[i] == '2' && s[i+1] == '0' && s[i+2] == '#')
                {ans += 't';i+=2;}
            else if(i < len -2 && s[i] == '2' && s[i+1] == '1' && s[i+2] == '#')
                {ans += 'u';i+=2;}
            else if(i < len -2 && s[i] == '2' && s[i+1] == '2' && s[i+2] == '#')
                {ans += 'v';i+=2;}
            else if(i < len -2 && s[i] == '2' && s[i+1] == '3' && s[i+2] == '#')
                {ans += 'w';i+=2;}
            else if(i < len -2 && s[i] == '2' && s[i+1] == '4' && s[i+2] == '#')
                {ans += 'x';i+=2;}
            else if(i < len -2 && s[i] == '2' && s[i+1] == '5' && s[i+2] == '#')
                {ans += 'y';i+=2;}
            else if(i < len -2 && s[i] == '2' && s[i+1] == '6' && s[i+2] == '#')
                {ans += 'z';i+=2;}
            else if(s[i] == '1' )
                ans += 'a';
            else if(s[i] == '2' )
                ans += 'b';
            else if(s[i] == '3' )
                ans += 'c';
            else if(s[i] == '4' )
                ans += 'd';
            else if(s[i] == '5' )
                ans += 'e';
            else if(s[i] == '6' )
                ans += 'f';
            else if(s[i] == '7' )
                ans += 'g';
            else if(s[i] == '8' )
                ans += 'h';
            else if(s[i] == '9' )
                ans += 'i';
        }
        return ans;
    }
};