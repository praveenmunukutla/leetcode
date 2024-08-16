class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score = vector<int>(1001,0);
        int sIndex = 0;

        int sum = 0, num = 0;
        for(auto s : operations){
            if(s == "C"){
               sIndex = sIndex > 0 ? --sIndex : 0;
            }else if(s == "D"){
               int val = score[sIndex-1];
               score[sIndex++] = val*2;
            }else if(s == "+"){
               int p1 = sIndex-1 >= 0 ? score[sIndex-1] : 0;
               int p2 = sIndex-2 >= 0 ? score[sIndex-2] : 0;
               int sum = p1 + p2;
               score[sIndex++] = sum;
            }else {
                num = stoi(s);
                score[sIndex++] = num;
            }
        }

        int tsum = 0;
        for(int i = 0; i < sIndex; i++){
            tsum += score[i];
        }
        return tsum;
    }
};