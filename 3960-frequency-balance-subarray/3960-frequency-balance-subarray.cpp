class Solution {
public:
    int getLength(vector<int>& nums) {
        int maxlen=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int>freq,freqcnt;
            int maxfreq=0;
            for(int j=i;j<n;j++)
            {
                if(freq.find(nums[j])!=freq.end())
                {
                    int of=freq[nums[j]];
                    freqcnt[of]--;
                    if(freqcnt[of]==0) freqcnt.erase(of);
                }
                freq[nums[j]]++;
                freqcnt[freq[nums[j]]]++;
                maxfreq=max(maxfreq,freq[nums[j]]);
                if(freq.size()==1)
                {
                    maxlen=max(maxlen,j+1-i);
                    continue;
                }
                if(maxfreq%2!=0) continue;
                if(freqcnt.size()==2&&freqcnt.find(maxfreq)!=freqcnt.end()&&freqcnt.find(maxfreq/2)!=freqcnt.end()) maxlen=max(maxlen,j+1-i);
                
            }
        }
        return maxlen;
    }
};