class Solution {
public:
    bool squareIsWhite(string c) {
        int row = c[1]-'0';
        int col = c[0]-'a'+1;

        cout<<row<<" "<<col<<endl;
        if(row%2==1){
            //starts with black;
            if(col%2 == 1) return false;
            if(col%2 == 0) return true;
        }

        //starts with white;
        if(col%2 == 1) return true;
        if(col%2 == 0) return false;
        return false;
    }
};