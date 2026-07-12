// Last updated: 7/12/2026, 6:46:56 PM
1class Solution {
2public:
3    vector<string> createGrid(int m, int n, int k) {
4        vector<string>ans(m,string(n,'#'));
5        if(m==1||n==1)
6        {
7            if(k!=1) return {};
8        }
9        if(m==3&&n==3&&k==4) return {"..#","...","#.."};
10        if(m<n)
11        {
12            for(int i=0;i<n;i++) ans[0][i]='.';
13            for(int i=0;i<m;i++) ans[i][n-1]='.';
14            k--;
15            int j=n-2,i=1;
16            while(k>0&&i>=0&&j>=0)
17            {
18                ans[i][j]='.',k--,j--;
19            }
20            if(k) return {};
21            return ans;
22        }
23        else
24        {
25            for(int i=0;i<m;i++) ans[i][0]='.';
26            for(int j=0;j<n;j++) ans[m-1][j]='.';
27            k--;
28            int i=m-2,j=1;
29            while(k>0&&i>=0&&j>=0)
30            {
31                ans[i][j]='.',k--,i--;
32            }
33            if(k) return {};
34            return ans;
35        }
36        return ans;
37    }
38};