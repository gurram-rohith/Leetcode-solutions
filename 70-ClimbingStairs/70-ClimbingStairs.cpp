// Last updated: 4/5/2026, 12:15:22 AM
class Solution {
public:
    int returnCount(int n,map<int,int>&mpp)
    {
        if(n==1||n==0) return 1;
        if(mpp.find(n)==mpp.end())
        mpp[n]=returnCount(n-1,mpp)+returnCount(n-2,mpp);
        return mpp[n];
    }
    int climbStairs(int n) {
        map<int,int>mpp;
        return returnCount(n,mpp);
    }
};