// Last updated: 6/9/2026, 1:13:17 PM
1class Solution {
2public:
3    long long maxTotal(vector<int>& nums, string s) {
4       long long mini=INT_MAX;
5       long long ans=0;
6       for(int i=nums.size()-1;i>=0;i--)
7       {
8        if(s[i]=='1')
9        {
10            ans+=nums[i];
11            mini=min(mini,(long long)nums[i]);
12        }
13        else 
14        {
15            if(i+1<nums.size()&&s[i+1]=='1')
16            {
17                ans+=nums[i];
18                mini=min(mini,(long long)nums[i]);
19                ans-=mini;
20            }
21             mini=INT_MAX;
22        }
23       }
24       return ans;
25    }
26};