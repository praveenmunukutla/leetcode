class ParkingSystem {
    unordered_map<int, int> umap;  // Map to store the number of available parking spots for each car type

public:
    // Constructor to initialize parking spots for each car type
    ParkingSystem(int big, int medium, int small) {
        umap[3] = small;   // Small car spots
        umap[2] = medium;  // Medium car spots
        umap[1] = big;     // Big car spots
    }
    
    // Attempt to add a car of given type to the parking system
    bool addCar(int carType) {
        if (umap[carType] <= 0) return false;  // Check if there's available space
        umap[carType]--;  // Decrease the count of available spots
        return true;  // Successfully parked the car
    }
};

/**
 * Example usage:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
