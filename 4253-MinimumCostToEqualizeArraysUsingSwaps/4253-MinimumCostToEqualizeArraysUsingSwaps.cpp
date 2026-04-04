// Last updated: 4/5/2026, 12:10:38 AM
class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        map<int,int>freq,freq1,freq2;
        for(int i=0;i<nums1.size();i++)
            {
                freq1[nums1[i]]++;
                freq2[nums2[i]]++;
                freq[nums1[i]]++;
                freq[nums2[i]]++;
            }
            for(auto it:freq)
            {
                if(it.second%2!=0) return -1;
            }
        if(freq1==freq2) return 0;
        for(auto it:freq1)
        {
            if(freq2.find(it.first)!=freq2.end())
            {
                it.second-=min(it.second,freq2[it.first]);
                freq2[it.second]-=min(it.second,freq2[it.first]);
            }
            ans+=it.second/2;
        }
        return ans;
    }
};