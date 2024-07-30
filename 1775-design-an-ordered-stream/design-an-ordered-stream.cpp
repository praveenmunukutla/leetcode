class OrderedStream {
    vector<pair<string, bool>> ans;
    int sn;
    int index;
public:
    OrderedStream(int n) {
        sn = n;
        index = 1;
        ans = vector<pair<string, bool>>(n+2, {"", false});
    }
    
    vector<string> insert(int idKey, string value) {
        ans[idKey] = {value, false};
        
        vector<string> res;

        while(index <= sn && !ans[index].first.empty() && !ans[index].second){
            res.push_back(ans[index].first);
            ans[index].second = true;
            index++;
        }

        return res;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */