// Last updated: 4/5/2026, 12:12:03 AM
class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<long long>rowsum(m,0),colsum(n,0);
        map<long long,vector<pair<int,int>>>mp;
        long long totrs=0,totcs=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                rowsum[i]+=grid[i][j];
                colsum[j]+=grid[i][j];
                mp[grid[i][j]].push_back({i,j});
            }
            totrs+=rowsum[i];
        }
        for(int k:colsum)
        totcs+=k;
        long long crsum=0,ccsum=0;
        for(int i=0;i<m-1;i++)
        {
            crsum+=rowsum[i];
            if(crsum*2==totrs) return true;
            if(crsum*2<totrs)
            {
                long long rem=totrs-2*crsum;
                if(mp.find(rem)!=mp.end())
                {
                    for(auto it:mp[rem])
                    {
                        if(it.first>i)
                        {
                            int h=m-1-i;
                            int w=n;
                            bool safe=true;
                            if(w==1&&(it.first!=i+1&&it.first!=m-1)) safe=false;
                            if(h==1&&(it.second!=0&&it.second!=n-1)) safe=false;
                            if(safe) return true;
                        }
                    }
                }
            }
            else
            {
                int rem=2*crsum-totrs;
                if(mp.find(rem)!=mp.end())
                {
                    for(auto it:mp[rem])
                    {
                        if(it.first<=i)
                        {
                            int h=i+1,w=n;
                            bool safe=true;
                            if(w==1&&(it.first!=0&&it.first!=i)) safe=false;
                            if(h==1&&(it.second!=0&&it.second!=n-1)) safe=false;
                            if(safe) return true;
                        }
                    }
                }

            }
        }
        for(int i=0;i<n-1;i++)
        {
            ccsum+=colsum[i];
            if(ccsum*2==totcs) return true;
            if(ccsum*2<totcs)
            {
                long long rem=totcs-2*ccsum;
                if(mp.find(rem)!=mp.end())
                {
                    for(auto it:mp[rem])
                    {
                        if(it.second>i)
                        {
                            int h=m;
                            int w=n-1-i;
                            bool safe=true;
                            if(h==1&&(it.second!=i+1&&it.second!=n-1)) safe=false;
                            if(w==1&&(it.first!=0&&it.first!=m-1)) safe=false;
                            if(safe) return safe;
                        }
                    }
                }
            }
            else
            {
                long long rem=2*ccsum-totcs;
                if(mp.find(rem)!=mp.end())
                {
                    for(auto it:mp[rem])
                    {
                        if(it.second<=i)
                        {
                            int h=m;
                            int w=i+1;
                            bool safe=true;
                            if(h==1&&(it.second!=0&&it.second!=i)) safe=false;
                            if(w==1&&(it.first!=0&&it.first!=m-1)) safe=false;
                            if(safe) return safe;
                        }
                    }
                }

            }
        }
        return false;
    }
};