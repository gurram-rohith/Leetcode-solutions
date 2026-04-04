// Last updated: 4/5/2026, 12:10:48 AM
class Solution {
public:
    int factorial(int n)
    {
        if(n==0) return 1;
        int ans=1;
        for(int i=n;i>=1;i--)
            {
                ans*=i;
            }
        return ans;
    }
    bool isDigitorialPermutation(int n) {
        int sum=0;
        int temp=n;
        map<int,int>fmp,smp;
        while(temp>0)
            {
                sum+=factorial(temp%10);
                fmp[temp%10]++;
                temp/=10;
            }
         temp=sum;
        cout<<temp<<endl;
        while(temp>0)
            {
                smp[temp%10]++;
                temp/=10;
            }
        
        for(auto it=fmp.begin();it!=fmp.end();++it)
            {
                if(smp.find(it->first)==smp.end()) return false;
                if(smp[it->first]!=it->second) return false;
            }
        for(auto it=smp.begin();it!=smp.end();++it)
            {
                 if(fmp.find(it->first)==fmp.end()) return false;
                if(fmp[it->first]!=it->second) return false;
            }
        return true;
        
        
    }
};