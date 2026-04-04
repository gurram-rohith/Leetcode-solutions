// Last updated: 4/5/2026, 12:13:19 AM
class Solution {
public:
    vector<int> sumZero(int n) {
        int temp=n;
        if(n%2!=0)
         n=n-1;
        vector<int>ans;
        for(int i=1;i<=n/2;i++){
           ans.push_back(i);
           ans.push_back(i*-1);
        }
        if(temp%2!=0)
        ans.push_back(0);
        return ans;
    }
};