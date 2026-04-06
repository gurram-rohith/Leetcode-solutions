// Last updated: 4/6/2026, 7:02:42 PM
1class Solution {
2public:
3    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
4        bool n=true,e=false,w=false,s=false;
5        int maxans=0;
6        int x=0,y=0;
7        map<pair<int,int>,int>mpp;
8        for(int i=0;i<obstacles.size();i++)
9        {
10            mpp[{obstacles[i][0],obstacles[i][1]}]=1;
11        }
12        for(int i=0;i<commands.size();i++)
13        {
14            if(commands[i]==-1)
15            {
16                if(n==true) n=0,e=true;
17                else if(s==true) s=0,w=true;
18                else if(e==true) e=0,s=true;
19                else if(w==true) w=0,n=true;
20                continue;
21            }
22            else if(commands[i]==-2)
23            {
24               if(n==true) n=0,w=true;
25                else if(s==true) s=0,e=true;
26                else if(e==true) e=0,n=true;
27                else if(w==true) w=0,s=true;
28                continue; 
29            }
30            int tempx=x,tempy=y;
31            if(n)
32            tempy+=commands[i];
33            else if(w)
34            tempx-=commands[i];
35            else if(s)
36            tempy-=commands[i];
37            else 
38            tempx+=commands[i];
39            if(x==tempx)
40            {
41                if(tempy<=y)
42                {
43                    for(int k=y-1;k>=tempy;k--)
44                    {
45                        if(mpp.find({x,k})!=mpp.end())
46                        {
47                        tempy=k+1;
48                        break;
49                        }
50                    }
51
52                }
53                else
54                {
55                    for(int k=1+y;k<=tempy;k++)
56                    {
57                    if(mpp.find({x,k})!=mpp.end())
58                    {
59                        tempy=k-1;
60                        break;
61                    }
62                    }
63                }
64            }
65            else
66            {
67                if(tempx>x)
68                {for(int k=1+x;k<=tempx;k++)
69                {
70                    if(mpp.find({k,y})!=mpp.end())
71                    {
72                        tempx=k-1;
73                        break;
74                    }
75                }}
76                else
77                {
78                    for(int k=x-1;k>=tempx;k--)
79                    {
80                        if(mpp.find({k,y})!=mpp.end())
81                        {
82                        tempx=k+1;
83                        break;
84                        }
85                    }
86                }
87            }
88            x=tempx,y=tempy;
89            maxans=max(maxans,y*y+x*x);
90        }
91        return maxans;
92    }
93};