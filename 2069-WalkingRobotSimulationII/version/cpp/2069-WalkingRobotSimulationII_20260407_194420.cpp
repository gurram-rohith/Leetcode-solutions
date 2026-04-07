// Last updated: 4/7/2026, 7:44:20 PM
1class Robot {
2public:
3    int width,height;
4    string dir;
5    int posx,posy;
6    Robot(int width, int height) {
7        this->width=width;
8        this->height=height;
9        dir="East";
10        posx=0;
11        posy=0;
12    }
13    
14    void step(int num) {
15        num%=2*(width-1)+2*(height-1);
16        if(num==0)
17        {
18            num=2*(width-1)+2*(height-1);
19        }
20        while(num>0)
21        {
22            int curx=posx,cury=posy;
23            if(dir=="East")
24            {
25                if(posx+num<width)
26                {
27                    posx+=num;
28                    num=0;
29                }
30                else
31                {
32                    num=num-(width-1-posx);
33                    posx=width-1;
34                    dir="North";
35                }
36            }
37            else if(dir=="North")
38            {
39                if(posy+num<height)
40                {
41                    posy+=num;
42                    num=0;
43                }
44                else
45                {
46                    num=num-(height-1-posy);
47                    posy=height-1;
48                    dir="West";
49                }
50            }
51            else if(dir=="South")
52            {
53                if(posy-num>=0)
54                {
55                    posy-=num;
56                    num=0;
57                }
58                else
59                {
60                    num-=posy;
61                    posy=0;
62                    dir="East";
63                }
64            }
65            else
66            {
67                if(posx-num>=0)
68                {
69                    posx-=num;
70                    num=0;
71                }
72                else
73                {
74                    num-=posx;
75                    posx=0;
76                    dir="South";
77                }
78            }
79        }
80    }
81    
82    vector<int> getPos() {
83        return {posx,posy};
84    }
85    
86    string getDir() {
87        return dir;
88    }
89};
90
91/**
92 * Your Robot object will be instantiated and called as such:
93 * Robot* obj = new Robot(width, height);
94 * obj->step(num);
95 * vector<int> param_2 = obj->getPos();
96 * string param_3 = obj->getDir();
97 */