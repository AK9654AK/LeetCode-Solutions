class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int steps=0;int water=capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=water){steps++;water-=plants[i];}
            else if(plants[i]>water){
                steps+=i*2;
                water=capacity;
                water-=plants[i];
                steps++;
            }
        }
        
        
        return steps;
        
        
        
        
        
        
        
        
    }
};