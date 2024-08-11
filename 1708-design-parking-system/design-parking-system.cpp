class ParkingSystem {
    unordered_map<int,int> umap;
public:
    ParkingSystem(int big, int medium, int small) {
        umap[3]=small;
        umap[2]=medium;
        umap[1]=big;
    }
    
    bool addCar(int carType) {
        if(umap[carType] <= 0) return false;
        umap[carType]--;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */