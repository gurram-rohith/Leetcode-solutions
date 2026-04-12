// Last updated: 4/12/2026, 8:30:43 AM
1class Solution {
2public:
3    vector<double> internalAngles(vector<int>& sides) {
4        int a=sides[0],b=sides[1],c=sides[2];
5        if(!((a+b>c)&&(b+c>a)&&(a+c>b))) return {};
6        double ta=acos((b*b+c*c-a*a)/(2.0*(b*c)))*180.0/M_PI;
7        double tb=acos((-b*b+c*c+a*a)/(2.0*(a*c)))*180.0/M_PI;
8        double tc=acos((b*b-c*c+a*a)/(2.0*(a*b)))*180.0/M_PI;
9        vector<double>ans;
10        ans.push_back(ta);
11        ans.push_back(tb);
12        ans.push_back(tc);
13        sort(ans.begin(),ans.end());
14        return ans;
15
16        
17    }
18};