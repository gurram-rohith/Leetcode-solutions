// Last updated: 4/5/2026, 12:10:33 AM
class EventManager {
public:
    struct cmp{
        bool operator()(pair<int,int>&a,pair<int,int>&b)
        {
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        }
    };
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    unordered_map<int,int>mp;
    EventManager(vector<vector<int>>& events) {
        for(int i=0;i<events.size();i++)
            {
                pq.push({events[i][1],events[i][0]});
                mp[events[i][0]]=events[i][1];
            }
    }
    
    void updatePriority(int eventId, int newPriority) {
        mp[eventId]=newPriority;
        pq.push({newPriority,eventId});
    }
    
    int pollHighest() {
        
        while(!pq.empty())
            {
                auto [val,key]=pq.top();
                if(mp[key]==-1||mp[key]!=val)
                {
                    pq.pop();
                }
                else {
                    pq.pop();
                    mp[key]=-1;
                    return key;
                };
            }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */