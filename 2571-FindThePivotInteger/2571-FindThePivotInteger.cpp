// Last updated: 4/5/2026, 12:12:40 AM
class Solution {
public:
    int pivotInteger(int n) {
        int preFixSum[n+1];
        int totalSum=0;
        preFixSum[0]=0;
        for(int i=1;i<=n;i++){
           preFixSum[i]=preFixSum[i-1]+i;
        }
        totalSum=n*(n+1)/2;
        for(int i=1;i<=n;i++){
            if(totalSum+i==2*preFixSum[i])
            return i;
        }
        return -1;
    }
};