class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans(arr.size());
        map<int,vector<int>>mpp;
        for(int i=0;i<arr.size();i++) mpp[arr[i]].push_back(i);
        int j=1;
        for(auto it=mpp.begin();it!=mpp.end();++it)
        {
            vector<int>&vec=it->second;
            for(int i:vec) ans[i]=j;
            j++;
        }
        return ans;
        }
};