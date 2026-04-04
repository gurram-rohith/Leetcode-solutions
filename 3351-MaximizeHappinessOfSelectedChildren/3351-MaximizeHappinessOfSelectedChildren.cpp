// Last updated: 4/5/2026, 12:12:20 AM
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long tot=0,ans=0;
        for(int i=0;i<k;i++)
        {
            if(tot==0)
            ans+=happiness[i];
            else
            {
                if(happiness[i]-tot<0)
                break;
                else
                ans+=happiness[i]-tot;
            }
            tot++;
        }
        return ans;
    }
};