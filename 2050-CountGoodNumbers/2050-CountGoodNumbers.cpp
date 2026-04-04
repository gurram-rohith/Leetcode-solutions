// Last updated: 4/5/2026, 12:12:53 AM
class Solution {
public:
   long long power(long long x,long long n){
    long long ans=1;
    long long temp=n;
    while(temp>0){
        if(temp%2==0){
            x%=1000000007;
            x*=x;
             x%=1000000007;

            temp/=2;
        }
        else
       {  ans%=1000000007;
         ans*=x;
          ans%=1000000007;
        temp-=1;
        }
    }
    return ans%1000000007;
   }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n-even;
        long long ans=1;
        ans*= power(5,even);
        ans=ans%1000000007;
        ans*=power(4,odd);
        ans=ans%1000000007;
        return ans;
    }
};