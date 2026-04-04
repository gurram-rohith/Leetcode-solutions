// Last updated: 4/5/2026, 12:11:02 AM
class Solution {
public:
    int countMonobit(int n) {
        int ans=0,i,j;
        for( i=0;i<=n;i++)
        {
            int x=i;
            int lsb=x&1,f=0;
            j=1;
            
        
            while(x>0)
                {
                   if((x&1)!=lsb)
                   {
                       f=1;
                       break;
                   }
                    j++;
                    x=x>>1;
                }
            if(f==0) ans++;
            
        }
        return ans;
    }
};