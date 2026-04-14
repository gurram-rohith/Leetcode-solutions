// Last updated: 4/14/2026, 10:28:33 AM
1class Solution {
2public:
3    int M=1e9+7;
4    long long fun(int a,int b){
5        if(b==0) return 1;
6        long long res=1,x=a%M;
7        while(b>0){
8        if(b&1){
9            res=(res*x)%M;
10            b-=1;
11        }
12            else{
13            x=(x*x)%M;
14            b/=2;
15            }
16        }
17        return res%M;
18    }
19    static bool comp(pair<int,int> a,pair<int,int> b){
20        if(a.second==0 && b.second) return true;
21        if(a.second && b.second==0) return false;
22        if(a.first > b.first) return true;
23        if(a.first==b.first){
24            if(a.second<b.second) return true;
25            return false;
26        }
27        return false;
28    }
29    int maxValue(vector<int>& nums1, vector<int>& nums0) {
30        vector<pair<int,int>> arr;
31        for(int i=0;i<nums1.size();i++){
32            arr.push_back({nums1[i],nums0[i]});
33        }
34        sort(begin(arr),end(arr),comp);
35        string s="";
36       for(int i=arr.size()-1;i>=0;i--){
37           int zeroes=arr[i].second;
38           int ones=arr[i].first;
39           while(zeroes--){
40               s+='0';
41           }
42           while(ones--){
43               s+='1';
44           }
45       }
46        reverse(begin(s),end(s));
47        long long ans=0;
48        int k=0;
49        for(int i=s.size()-1;i>=0;i--){
50            if(s[i]=='1'){
51                int x=fun(2,k)%M;
52                ans=(ans+x)%M;
53            }
54            k++;
55        }
56        return (int)ans;
57    }
58};