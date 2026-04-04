// Last updated: 4/5/2026, 12:14:38 AM
class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1)return 0;
        bool prime[n];
        int i,p,j,count=0;
        prime[0]=false,prime[1]=false;
        for(i=2;i<n;i++)
        {
            prime[i]=true;
        }
        for(i=2;i<n;i++)
        {j=2;
            for(j=j*i;j<n;j+=i)
            {
                prime[j]=false;
            }
        }
        for(i=0;i<n;i++)
        {
            if(prime[i]==true)
            count++;
        }
        return count;
    }
};