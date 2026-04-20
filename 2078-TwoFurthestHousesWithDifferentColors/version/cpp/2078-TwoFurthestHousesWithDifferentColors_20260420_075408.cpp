// Last updated: 4/20/2026, 7:54:08 AM
1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4        int n=colors.size(),l,r;
5        for(int i=0;i<n;i++)
6        {
7            if(colors[i]^colors[n-1])
8            {
9                l=i;
10                break;
11            }
12        }
13        for(int i=n-1;i>=0;i--)
14        {
15            if(colors[i]^colors[0])
16            {
17                r=i;
18                break;
19            }
20        }
21        return max(n-1-l,r);
22    }
23};