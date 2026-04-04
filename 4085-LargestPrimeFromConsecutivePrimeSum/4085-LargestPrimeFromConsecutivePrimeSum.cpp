// Last updated: 4/5/2026, 12:11:36 AM
class Solution {
public:
    bool isprime(long long n)
    {
        if(n==1) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
    int largestPrime(int n) {
        if(n==1) return 0;
        vector<int>primes;
        long long sum=0;
        int i;
        for( i=2;i<=n;i++)
        {
            if(isprime(i))
            {
            if(sum+i<=n)
            {sum+=i;
            primes.push_back(i);}
            else
            break;
            }
        }
        if(isprime(sum)) return sum;
        else{
            for(int i=primes.size()-1;i>=0;i--)
            {
                if(isprime(sum)) return sum;
                else
                sum-=primes[i];
            }
            
        }
        return sum;


    }
};