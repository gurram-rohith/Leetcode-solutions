// Last updated: 4/10/2026, 9:07:36 AM
1class Solution {
2public:
3    int minimumDistance(vector<int>& nums) {
4        int mindist=INT_MAX;
5        vector<vector<int>>vec(101);
6        for(int i=0;i<nums.size();i++)
7        {
8            vec[nums[i]].push_back(i);
9        }
10        for(int m=1;m<=100;m++)
11        {
12            if(vec[m].size()<=2)  continue;
13            int i=0,j=1,k=2;
14            while(k<vec[m].size())
15            {
16                mindist=min(mindist,abs(vec[m][i]-vec[m][j])+abs(vec[m][j]-vec[m][k])+abs(vec[m][k]-vec[m][i]));
17                i=j;
18                j=k;
19                k++;
20            }
21        }
22        if(mindist==INT_MAX) return -1;
23        return mindist;
24    }
25};