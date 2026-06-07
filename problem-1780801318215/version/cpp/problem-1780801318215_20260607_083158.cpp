// Last updated: 6/7/2026, 8:31:58 AM
1class Solution {
2public:
3    void genString(vector<string>&ans,int n,int k,char prev,int sum,string &temp)
4    {
5        if(sum>k) return;
6        if(temp.size()>n) return;
7        if(temp.size()==n) {
8            ans.push_back(temp);
9            return;
10        }
11        int idx=temp.size();
12        
13                temp+='0';
14                genString(ans,n,k,'0',sum,temp);
15                temp.pop_back();      
16            if(prev=='0'||prev=='\n')
17            {
18                temp+='1';
19                genString(ans,n,k,'1',sum+idx,temp);
20                temp.pop_back();
21            }
22            
23        
24    }
25    vector<string> generateValidStrings(int n, int k) {
26        vector<string>ans;
27        string temp;
28        genString(ans,n,k,'\n',0,temp);
29        
30        
31        return ans;
32    }
33};