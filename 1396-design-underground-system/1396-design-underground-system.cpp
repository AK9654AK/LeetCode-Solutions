class UndergroundSystem {
public:
     map<pair<string,string>, vector<double>> gAt;
    
    map<int,pair<string,int>> mp;
    UndergroundSystem() {
    }
    
    void checkIn(int id, string sN, int t) {
        mp[id] = {sN,t};
    }
    
    void checkOut(int id, string sN, int t) {
        auto it = mp[id];
        
        double diff = (double)(t - it.second);
        gAt[{it.first,sN}].push_back(diff);
    }
    
    double getAverageTime(string sN, string eS) {
        vector<double> v =gAt[{sN,eS}];
        
        double sum = 0.0;
        for (int i=0;i<v.size();i++) {
            sum += v[i];
        }
        return sum/v.size();
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */