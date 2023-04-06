class ParkingSystem {
public:
    int lar;int med;int lit;
    ParkingSystem(int big, int medium, int small) {
        lar=big;
        med=medium;
        lit=small;
    }
    
    bool addCar(int carType) {
        if(carType==1)if(lar>0){
            lar--;
            return true;
        }
        
        if(carType==2)if(med>0){
            med--;
            return true;
        }
        if(carType==3)if(lit>0){
            lit--;
            return true;
        }
        return false;
   
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */