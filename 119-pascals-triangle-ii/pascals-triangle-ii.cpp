class Solution {
    vector<vector<int>> cache;
    vector<int> ans;
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

    vector<int> getRow(int rowIndex) {
        for(int i = 1; i <= rowIndex+1; i++){
            ans.push_back(getNCR(rowIndex+1, i));
        }
        return move(ans);
    }

    int getNCR(int row, int index){
        if(index == 1 || row == index) return 1;
        if(cache[row][index] != -1) return cache[row][index];
        return cache[row][index] = getNCR(row-1, index-1) + getNCR(row-1, index);
    }
};