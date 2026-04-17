class Solution {
public:
    long long reverse(int n)
    {
        long long temp=0;
        while(n>0)
        {
           temp=temp*10+n%10;
            n/=10;
        }
        return temp;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        map<int,vector<int>>mpp;
        int minans=INT_MAX;

        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]].push_back(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            long long y=reverse(nums[i]);
            if(mpp.find(y)!=mpp.end())
           {
            vector<int>&vec=mpp[y];
            int ind=upper_bound(vec.begin(),vec.end(),i)-vec.begin();
            
            if(ind>=0&&ind<vec.size())
            minans=min(minans,vec[ind]-i);
           }
        }
        if(minans==INT_MAX) return -1;
        return minans;
    }
};