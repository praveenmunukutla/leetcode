class OrderedStream {
    vector<pair<string, bool>> ans;
    int sn;
public:
    OrderedStream(int n) {
        sn = n;
        ans = vector<pair<string, bool>>(n+2, {"", false});
    }
    
    vector<string> insert(int idKey, string value) {
        ans[idKey] = {value, false};
        
        vector<string> res;
        for(int i = 1; i <= sn; i++){
            if(ans[i].first.empty()){
                break;
            }
            if(!ans[i].second){
                res.push_back(ans[i].first);
                ans[i].second = true;
            }
        }

        return res;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */