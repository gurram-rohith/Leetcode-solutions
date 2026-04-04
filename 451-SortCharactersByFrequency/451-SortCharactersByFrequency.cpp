// Last updated: 4/5/2026, 12:14:00 AM
class Solution {
public:
struct CompareSecond {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) {
        return a.second < b.second; 
    }
};
    string frequencySort(string s) {
       vector<int>vpp(100,0);
        priority_queue<pair<int,int>, vector<pair<int,int>>, CompareSecond> pq;
       string ans="";
        for(int i=0;i<s.size();i++)
        {
            vpp[s[i]-'0']++;
        }
        for(int i=0;i<vpp.size();i++){
            pq.push({i,vpp[i]});
        }
        while(!pq.empty()){
            for(int i=0;i<pq.top().second;i++)
            {
                ans+=pq.top().first+'0';
            }
            pq.pop();
        }
        
        
        return ans;
    }
};