class MyHashMap {
    vector<int> umap;
public:
    MyHashMap() {
        umap = vector<int>(1000007,-1);
    }
    
    void put(int key, int value) {
        umap[key]=value;
    }
    
    int get(int key) {
        return umap[key];
    }
    
    void remove(int key) {
        umap[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */