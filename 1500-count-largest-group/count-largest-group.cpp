class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,vector<int>> umap;
        for(int i = 1; i <= n; i++){
            int sum = 0;
            int tval = i;
            while(tval){
                sum += tval%10;
                tval = tval/10;
            }
            umap[sum].push_back(i);
        }

        int largestSize = 0;
        int largestSizeCount = 0;

        for(auto u : umap){
            if(u.second.size() > largestSize){
                largestSize = u.second.size();
                largestSizeCount = 1;
            }else if(u.second.size() == largestSize){
                largestSizeCount++;
            }
        }

        return largestSizeCount;
    }
};