class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> umap;
        for(int i = 0; i < arr.size(); i++){
            umap[arr[i]] = i;
        }

        for(int i = 0; i < arr.size(); i++){
            int val = arr[i]*2;
            if(umap.find(val) != umap.end()){
                if(i != umap[val])
                    return true;
            }
        }

        
        return false;
    }
};