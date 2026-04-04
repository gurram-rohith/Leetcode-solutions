// Last updated: 4/5/2026, 12:12:42 AM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        long long ans=start^goal;
        int count=0;
        for(int i=0;i<32;i++){
          if(((ans>>i)&1)!=0)
          count++;
        }
        return count;
    }
};