// Last updated: 4/5/2026, 12:15:37 AM
class Solution {
public:
    double myPow(double x, int n) {
        long long temp=n;
        double ans=1.0;
        if(n<0) temp*=-1;
        while(temp>0){
         if(temp%2==0){
            x=x*x;
            temp/=2;
         }
         else
         {
            ans*=x;
            temp=temp-1;
         }

        }
        if(n<0)
        return double(1.0)/double(ans);
        else
        return ans;
    }
};