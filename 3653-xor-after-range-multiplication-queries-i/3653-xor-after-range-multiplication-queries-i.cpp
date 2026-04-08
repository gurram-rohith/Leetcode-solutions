class Solution {
public:
    const int mod=1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0],r=queries[i][1],k=queries[i][2];
            long long v=queries[i][3];
            int j=l;
            while(j<=r)
            {
                nums[j]=(nums[j]*v)%mod;
                j+=k;
            }
        }
        int xorall=0;
        for(int i:nums)
        xorall^=i;
        return xorall;
    }
};