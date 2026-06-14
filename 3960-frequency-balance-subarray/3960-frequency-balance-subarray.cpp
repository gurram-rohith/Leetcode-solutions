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
                
                freq[nums[j]]++;
                maxfreq=max(maxfreq,freq[nums[j]]);
                if(freq.size()==1)
                {
                    maxlen=max(maxlen,j+1-i);
                    continue;
                }
                if(maxfreq%2!=0) continue;
                int half=maxfreq/2;
                bool f=true,t=false,b=false;
                for(auto it:freq)
                {
                    
                    if(it.second!=half&&it.second!=maxfreq)
                    {
                        f=false;
                        break;
                    }
                    if(it.second==half) t=true;
                    if(it.second==maxfreq) b=true;
                }
                if(f&t&b) maxlen=max(maxlen,j+1-i);
            }
        }
        return maxlen;
    }
};