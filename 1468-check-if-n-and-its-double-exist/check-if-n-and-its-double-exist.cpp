class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> umap;

        for(int i = 0; i < arr.size(); i++){
            int dval = arr[i]*2;
            int hval = arr[i]%2==0 ? arr[i]/2 : -1;
            cout<<dval<<" "<<hval<<endl;

            auto findInMap = [&](int val){
                if(umap.find(val) != umap.end()) return true;
                return false;
            };

            if(hval != -1 && findInMap(hval) && umap[hval] != i) return true;
            else if(findInMap(dval) && umap[dval] != i) return true;

            umap[arr[i]] = i;
        }

        
        return false;
    }
};