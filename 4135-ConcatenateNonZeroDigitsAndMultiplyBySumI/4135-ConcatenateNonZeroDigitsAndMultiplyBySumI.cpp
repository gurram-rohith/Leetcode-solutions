// Last updated: 4/5/2026, 12:11:20 AM
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long var=0;
        while(n>0)
            {
                int rem=n%10;
                
                if(rem!=0)
                var=var*10+rem;
                n/=10;
            }
        cout<<var<<endl;
        long long temp=0;
        while(var>0)
            {
                int rem=var%10;
                
                temp=temp*10+rem;
                var/=10;
            }
        long long sum=0,t=temp;
        while(temp>0)
            {
                sum+=temp%10;
                temp/=10;
            }
        return sum*t;
        
    }
};