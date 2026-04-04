// Last updated: 4/5/2026, 12:10:35 AM
class Solution {
public:
        vector<int>divisors;
    void computeDivisors(int n)
    {
        for(int i=1;i*i<=n;i++){
            if(n%i==0)
            {
                divisors.push_back(i);
                if(i!=n/i)
                divisors.push_back(n/i);
            }
        }
    }
    int sortableIntegers(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        computeDivisors(n);
        // max divisors till 1e5 are 128 
        for(int k=0;k<divisors.size();k++)
        {
            int p=divisors[k];
                bool invalid=false;
                vector<int>minele,maxele;
            for(int i=0;i<nums.size();i+=p)
            {
                int minii=INT_MAX,maxii=INT_MIN;
                int descents=0;
                // dividing into subarrays
                for(int j=i;j<i+divisors[k];j++)
                {
                    // rotation check
                   if(j<i+p-1&&nums[j]>nums[j+1]) descents++;
                    if(descents>1)
                    {
                        invalid=true;
                        break;
                    }
                    minii=min(minii,nums[j]);
                    maxii=max(maxii,nums[j]);
                }
                if(invalid) {
                    break;
                }
                if(descents==1&&nums[i+p-1]>nums[i])
                {
                    invalid=true;
                    break;
                }
                // for checking whether it can get sorted after rotation
                maxele.push_back(maxii);
                minele.push_back(minii);
            }
            if(invalid) continue;
            int f=0;
            // continuity checking
            for(int i=0;i<maxele.size()-1;i++)
            {
                if(maxele[i]>maxele[i+1])
                {
                    f=1;
                    break;
                }
            }
            for(int i=0;i<minele.size()-1;i++)
            {
                if(minele[i]>minele[i+1])
                {
                    f=1;
                    break;
                }
            }
            for(int i=0;i<maxele.size()-1;i++)
            {
                if(maxele[i]>minele[i+1])
                {
                    f=1;
                    break;
                }
            }
            if(f==0) ans+=divisors[k];
        }
        return ans;


    }
};