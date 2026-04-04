// Last updated: 4/5/2026, 12:11:33 AM
class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        long long ans=0;
        vector<pair<int,int>>vpp;
        for(int i=0;i<technique1.size();i++)
        {
            vpp.push_back({technique1[i]-technique2[i],i});
        }
        sort(vpp.begin(),vpp.end());
        int completed=0;
        for(int i=vpp.size()-1;i>=0;i--)
        {
                if(completed<k)
            {    
                ans+=technique1[vpp[i].second];
                completed++;
            }
            else
            {
            if(vpp[i].first<0)
            ans+=technique2[vpp[i].second];
            else
            ans+=technique1[vpp[i].second];
            }
        }
        return ans;
        

    }
};