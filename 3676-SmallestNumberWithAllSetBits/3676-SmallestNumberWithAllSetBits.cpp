// Last updated: 4/5/2026, 12:12:13 AM
class Solution {
public:
    int smallestNumber(int n) {
        long long ans=1;
        long long temp;
        int msb;
        for(int i=0;i<10;i++){
           temp=(n>>i);
           if(temp&1)
           msb=i;

        }
        for(int j=1;j<=msb;j++)
        ans+=pow(2,j);
        return ans;
    }
};