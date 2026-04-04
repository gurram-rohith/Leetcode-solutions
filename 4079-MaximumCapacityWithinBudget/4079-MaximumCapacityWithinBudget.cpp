// Last updated: 4/5/2026, 12:11:38 AM
class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        vector<int>maxcap(costs.size(),0);
        vector<pair<int,int>>vpp;

        for(int i=0;i<costs.size();i++)
        {
            vpp.push_back({costs[i],capacity[i]});
        }
        sort(vpp.begin(),vpp.end());
        maxcap[0]=vpp[0].second;
        for(int i=1;i<costs.size();i++)
        maxcap[i]=max(maxcap[i-1],vpp[i].second);
        int j=capacity.size()-1,maxans=0;
        for(int i=0;i<costs.size();i++)
        {
            if(vpp[i].first<budget)
            maxans=max(maxans,vpp[i].second);
            while(j>=0&&vpp[i].first+vpp[j].first>=budget) j--;
            if(j<0) continue;
            int k=min(j,i-1);
            if(k>=0)
            maxans=max(maxans,vpp[i].second+maxcap[k]);
            
        }
        return maxans;
    }
};