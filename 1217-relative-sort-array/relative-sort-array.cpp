class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> uset(arr2.begin(), arr2.end());
        unordered_map<int,int> umap;
        vector<int> present;
        vector<int> ntPresent;
        for(auto a : arr1){
            if(uset.count(a)) umap[a]++;
            else ntPresent.push_back(a);
        }

        
        for(auto a : arr2){
            if(umap.find(a) != umap.end()){
                int c = umap[a];
                while(c--){
                    present.push_back(a);
                }
            }
        }

        sort(ntPresent.begin(), ntPresent.end());

        for(auto nt : ntPresent){
            present.push_back(nt);
        }
        return present;
    }
};