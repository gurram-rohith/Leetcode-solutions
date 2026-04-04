// Last updated: 4/5/2026, 12:12:16 AM
class Solution {
public:
    long long minNumberOfSeconds(int height, vector<int>& wt) {
        long long l=1,h=1e18,mid,ans;
        ans=h;
        while(l<=h)
        {
            mid=(l+h)/2;
            long long tot=0;
            for(int i:wt)
            {
                long long val=(2*mid)/i;
                long long k=(-1+sqrt(1+4*val))/2;
                tot+=k;
                if(tot>=height) break;
            }
            if(tot>=height)
            {
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};