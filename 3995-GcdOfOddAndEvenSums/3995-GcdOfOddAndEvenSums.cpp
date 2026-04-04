// Last updated: 4/5/2026, 12:11:55 AM
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evenSum=0,oddSum=0,ans=1;
        for(int i=2;i<=2*n;)
            {
                evenSum+=i;
                i=i+2;
            }
        for(int i=1;i<=2*(n)-1;i+=2)
            {
                oddSum+=i;
    }
        int minim=min(evenSum,oddSum);
        int maxim=max(evenSum,oddSum);
        while(minim>0){
            maxim=maxim%minim;
            if(maxim==0) break;
            minim=minim%maxim;
        }
        
        return max(maxim,minim);
    }
};