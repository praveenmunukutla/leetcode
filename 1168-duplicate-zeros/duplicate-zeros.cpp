class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue<int> q(arr.begin(), arr.end());
        int aindex = 0;
        while(!q.empty()){
            if(aindex >= arr.size()) break;
            int v = q.front(); q.pop();
            if(v == 0){
                arr[aindex] = 0;
                if(aindex+1 < arr.size())
                    arr[aindex+1] = 0;
                aindex++;
            }else{
                arr[aindex] = v;
            }
            aindex++;
        }
    }
};