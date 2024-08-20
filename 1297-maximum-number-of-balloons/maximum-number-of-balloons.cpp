class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> umap;
        for(auto t : text) umap[t]++;
        // b - 1 ; a - 1; l - 2; o - 2; n - 1;
        // string balloon = "balloon";
        // int count = 0, i = 0;
        // while(true){
        //     for(i = 0; balloon[i] != '\0'; i++){
        //         char c = balloon[i];
        //         if(umap[c] > 0) umap[c]--;
        //         else break;
        //     }
        //     if(balloon[i] == '\0') count++;
        //     else break;
        // }
        int ban = min(umap['b'], min(umap['a'], umap['n']));
        int lo = min(umap['l']/2, umap['o']/2);
        return min(ban, lo);
    }
};