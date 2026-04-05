// Last updated: 4/5/2026, 8:57:13 AM
1class Solution {
2public:
3    vector<int> findGoodIntegers(int n) {
4        vector<int>cubes(1001);
5        vector<int>ans;
6        for(int i=0;i<=1000;i++)
7            cubes[i]=i;
8        map<long long,int>mp2;
9        for(int i=1;i<=1000;i++)
10            {
11                for(int j=i;j<=1000;j++)
12                    {
13                        long long temp=1LL*cubes[i]*1LL*cubes[i]*1LL*cubes[i]+cubes[j]*1LL*cubes[j]*1LL*cubes[j];
14                        if(temp<=n)mp2[temp]++;
15                        else break;
16                    }
17            }
18                for(auto it:mp2)
19                    {
20                        if(it.second>=2)
21                            ans.push_back((int)it.first);
22                    }
23        sort(ans.begin(),ans.end());
24        return ans;
25        
26    }
27};