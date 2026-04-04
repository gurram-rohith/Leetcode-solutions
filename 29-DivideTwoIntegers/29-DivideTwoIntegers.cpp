// Last updated: 4/5/2026, 12:15:51 AM
class Solution {
public:
    int divide(int dividend, int divisor) {
        long long n,q;
        long long ans=0;
     bool sign=true;
        if(dividend==divisor) return 1;
        n=dividend,q=divisor;
        if(n<=0&&q>0||n>=0&&q<0) sign=false;
        n=abs(n);
        q=abs(q);
        long long count=0;
        while(n>=q){
            count=0;
           while(n>=(q << (count+1))){
            
            count++;
           }
          ans+=(1<<(count));
           n-=(q<<(count));
        }
       if(sign==false){
         if(ans==(1<<31))
         return INT_MIN;
         
       }
       if(sign==true)
       {
        if(ans==(1<<31)) return INT_MAX;
      
       }
          if(!sign)
          ans*=-1;
          return ans;
    }
};