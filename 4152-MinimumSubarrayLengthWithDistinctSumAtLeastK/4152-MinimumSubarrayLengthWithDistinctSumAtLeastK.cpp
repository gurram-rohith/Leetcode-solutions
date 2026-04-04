// Last updated: 4/5/2026, 12:11:13 AM
class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int minlen=INT_MAX;
        int tempsum=0;
        map<int,int>freq;
        if(nums.size()==1)
        {
            if(nums[0]>=k)
                return 1;
            return -1;
        }
        int l=0,r=0;
        tempsum+=nums[l];
        freq[nums[0]]=1;
        while(r<nums.size()&&l<=r)
            {
                while(tempsum>=k)
                    {
                        minlen=min(minlen,r+1-l);
                        freq[nums[l]]--;
                        if(freq[nums[l]]==0)
                            tempsum-=nums[l];
                        l++;
                    }
                r++;
                if(r<nums.size())
                {
                    if(freq[nums[r]]==0)
                        tempsum+=nums[r];
                    freq[nums[r]]++;
                }
                
            }
        if(minlen==INT_MAX) return -1;
        return minlen;
        
    }
};