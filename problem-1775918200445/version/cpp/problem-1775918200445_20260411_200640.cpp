// Last updated: 4/11/2026, 8:06:40 PM
1class Solution {
2public:
3    int countDigitOccurrences(vector<int>& nums, int digit) {
4        int ans=0;
5        for(int i=0;i<nums.size();i++)
6            {
7                int temp=nums[i];
8                while(temp>0)
9                    {
10                        if(temp%10==digit) ans++;
11                        temp/=10;
12                    }
13            }
14        return ans;
15    }
16};