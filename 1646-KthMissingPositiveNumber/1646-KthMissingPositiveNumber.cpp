// Last updated: 4/5/2026, 12:13:07 AM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       map<int,int>mpp;
       for(int i=0;i<arr.size();i++)
       mpp[arr[i]]++;
       int ans=1;
       for(int i=1;k!=0;i++){
        if(mpp.find(i)==mpp.end())
        {
          ans=i;
          k--;
        }
       }
       return ans;
    }
};