// Last updated: 4/19/2026, 8:09:55 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<long long>maxele(n),minele(n);
6        for(int i=0;i<n;i++)
7            {
8               if(i==0) maxele[i]=nums[i];
9                else maxele[i]=max(maxele[i-1],(long long)nums[i]);
10            }
11        for(int i=n-1;i>=0;i--)
12            {
13                if(i==n-1) minele[i]=nums[i];
14                else minele[i]=min(minele[i+1],(long long)nums[i]);
15            }
16        for(int i=0;i<n;i++)
17            {
18                if(maxele[i]-minele[i]<=k) return i;
19            }
20        return -1;
21    }
22};