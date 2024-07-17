class Solution {
    vector<vector<int>> cache;
public:
     int speed = []() { 
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    Solution(){
        cache = vector<vector<int>>(35, vector<int>(35, -1));
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            vector<int> trow;
            for(int j = 1; j <= i; j++){
              trow.push_back(getNcR(i, j));
            }
            ans.emplace_back(move(trow));
        }

        return move(ans);
    }

    int getNcR(int row, int index){
        if(index == 1 || row == index) return 1;
        if(cache[row][index] != -1) return cache[row][index];
        return cache[row][index] = getNcR(row-1, index-1) + getNcR(row-1, index);
    }
};


