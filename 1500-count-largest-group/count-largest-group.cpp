class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> umap;
        for(int i = 1; i <= n; i++){
            int sum = 0;
            int tval = i;
            while(tval){
                sum += tval%10;
                tval = tval/10;
            }
            umap[sum]++;
        }

        int largestSize = 0;
        int largestSizeCount = 0;

        for(auto u : umap){
            if(u.second > largestSize){
                largestSize = u.second;
                largestSizeCount = 1;
            }else if(u.second == largestSize){
                largestSizeCount++;
            }
        }

        return largestSizeCount;
    }
};