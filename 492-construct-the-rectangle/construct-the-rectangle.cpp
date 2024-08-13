class Solution {
public:
    vector<int> constructRectangle(int area) {

        vector<int> ans{0,0};
        int diff = INT_MAX;

        for(int i = 1; i * i <= area; i++){
            if(area%i == 0){
                int adiff = abs(i - (area/i));
                if(adiff < diff){
                    ans[0] = area/i;
                    ans[1] = i;
                }
            }
        }

        return ans;
    }
};

// 16

// W * L
// 1 * 16
// 2 * 8
// 4 * 4