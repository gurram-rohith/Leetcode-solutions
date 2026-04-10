// Last updated: 4/10/2026, 9:00:28 AM
1class Solution {
2public:
3    int minimumDistance(vector<int>& nums) {
4        int mindist=INT_MAX;
5        map<int,vector<int>>mpp;
6        for(int i=0;i<nums.size();i++)
7        {
8            mpp[nums[i]].push_back(i);
9        }
10        for(auto it=mpp.begin();it!=mpp.end();++it)
11        {
12            vector<int>vec=it->second;
13            if(vec.size()<=2)  continue;
14            int i=0,j=1,k=2;
15            while(k<vec.size())
16            {
17                mindist=min(mindist,abs(vec[i]-vec[j])+abs(vec[j]-vec[k])+abs(vec[k]-vec[i]));
18                i=j;
19                j=k;
20                k++;
21            }
22        }
23        if(mindist==INT_MAX) return -1;
24        return mindist;
25    }
26};