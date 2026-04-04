// Last updated: 4/5/2026, 12:14:57 AM
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        if(n==1) return 1;
        vector<pair<int,int>>vpp;
        vector<int>a(n,1);
        for(int i=0;i<n;i++)
        {
            vpp.push_back({ratings[i],i});
        }
        sort(vpp.begin(),vpp.end());
        for(int i=0;i<n;i++)
        {
            if(vpp[i].second==0)
            {
                if(ratings[1]<vpp[i].first) a[0]=a[1]+1;
            }
            else if(vpp[i].second==n-1)
            {
                if(ratings[n-2]<vpp[i].first) a[n-1]=a[n-2]+1;
            }
            else
            {
                int index=vpp[i].second;
                if(ratings[index-1]<vpp[i].first) a[index]=max(a[index],a[index-1]+1);
                if(ratings[index+1]<vpp[i].first) a[index]=max(a[index],a[index+1]+1);
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=a[i];
        return sum;
       
    }
};