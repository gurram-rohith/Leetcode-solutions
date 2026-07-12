// Last updated: 7/12/2026, 10:13:18 PM
1class Solution {
2public:
3    vector<int> arrayRankTransform(vector<int>& arr) {
4        vector<int>ans(arr.size());
5        map<int,vector<int>>mpp;
6        for(int i=0;i<arr.size();i++) mpp[arr[i]].push_back(i);
7        int j=1;
8        for(auto it=mpp.begin();it!=mpp.end();++it)
9        {
10            vector<int>&vec=it->second;
11            for(int i:vec) ans[i]=j;
12            j++;
13        }
14        return ans;
15        }
16};