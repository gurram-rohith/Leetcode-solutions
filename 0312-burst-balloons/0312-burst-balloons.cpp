class Solution {
public:
    int maxans(vector<vector<int>>&dp,int i,int j,vector<int>&nums)
    {
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=i;k<=j;k++)
        {
            dp[i][j]=max(dp[i][j],nums[i-1]*nums[k]*nums[j+1]+maxans(dp,i,k-1,nums)+maxans(dp,k+1,j,nums));
        }
        return dp[i][j];

    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return maxans(dp,1,n-2,nums);
    }
};