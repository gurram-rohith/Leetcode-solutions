// Last updated: 6/8/2026, 8:02:04 PM
1class Solution {
2public:
3    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
4        sort(intervals.begin(),intervals.end());
5        int s=intervals[0][0],e=intervals[0][1];
6        vector<vector<int>>temp;
7        for(int i=1;i<intervals.size();i++)
8        {
9            if(e>=intervals[i][0]&&e>=intervals[i][1])
10            continue;
11            if(e>=intervals[i][0]&&e<intervals[i][1])
12            e=intervals[i][1];
13            else temp.push_back({s,e}),s=intervals[i][0],e=intervals[i][1];
14        }
15        temp.push_back({s,e});
16        long long ans=0;
17        for(int i=0;i<temp.size();i++)
18        {
19            ans+=temp[i][1]+1-temp[i][0];
20        }
21        ans*=ceil(brightness/(3LL*(1.0)));
22        return ans;
23    }
24};