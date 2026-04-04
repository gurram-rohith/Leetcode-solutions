// Last updated: 4/5/2026, 12:13:28 AM
class Solution {
public:
    int bitwiseComplement(int n) {
        string s;
        int temp=n;
        if(n==0) return 1;
        long long ans=0;
        while(temp>0)
        {
            if(temp&1)
            s+='1';
            else
            s+='0';
            temp/=2;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            ans+=(1<<i);
        }
        return (int)ans;
    }
};