// Last updated: 4/5/2026, 12:11:23 AM
class RideSharingSystem {
public:

    queue<int>dr,ri;
    vector<int>hash{1001};
    RideSharingSystem() 
        : hash(1001, 0) {}
    
    
    void addRider(int riderId) {
        ri.push(riderId);
        hash[riderId]=0;
    }
    
    void addDriver(int driverId) {
        dr.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        while(ri.size() && hash[ri.front()]) ri.pop();
        if(!dr.size() || !ri.size()) return {-1,-1};
        int a=dr.front(),b=ri.front();
        dr.pop(),ri.pop();
        return {a,b};
    }
    
    void cancelRider(int riderId) {
        hash[riderId]=1;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */