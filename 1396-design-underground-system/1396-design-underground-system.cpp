class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> in;
    unordered_map<string, pair<int,int>> out;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        in[id].first = stationName;
        in[id].second=t;
        
    }
    
    void checkOut(int id, string stationName, int t) {
        auto &checkIn = in[id];
        string route = checkIn.first + '-' + stationName;
        out[route].first+=t - checkIn.second;
        out[route].second+=1;
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        string route = startStation+'-'+endStation;
        auto & checkout = out[route];
        return (double) checkout.first/checkout.second;        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */