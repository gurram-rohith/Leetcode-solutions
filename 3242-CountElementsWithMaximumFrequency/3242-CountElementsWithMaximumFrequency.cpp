// Last updated: 4/5/2026, 12:12:26 AM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int n=nums.size();
        int hasharr[101];
        for(int i=0;i<101;i++){
            hasharr[i]=0;
        }
        int maxfreq=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            hasharr[nums[i]]++;
        }
        for(int i=0;i<101;i++){
            maxfreq=max(maxfreq,hasharr[i]);
        }
        for(int i=0;i<101;i++){
            if(hasharr[i]==maxfreq){
                count++;
            }
        }
      
        return count*maxfreq;
    }
};