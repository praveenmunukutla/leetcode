class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double special = 0.25 * arr.size();
        for(int i = 0; i < arr.size(); i++){
            int val = arr[i];
            int j = i+1;
            while(j < arr.size() && arr[j] == val)j++;
            double count = j - i;
            //cout<<count<<" "<<val<<" "<<special<<endl;
            if(count > special) return val;
        }

        return 0;
    }
};