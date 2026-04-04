// Last updated: 4/5/2026, 12:11:43 AM
class Solution {
public:
    long long removeZeros(long long n) {
        long long temp=n;
        long long ans=0;
        while(temp>0){
            if(temp%10!=0)
               ans=ans*10+temp%10;
            temp/=10;
        }
       long long rev=0;
        while(ans>0){
            rev=rev*10+ans%10;
            ans/=10;
        }
        return rev;
    }
};