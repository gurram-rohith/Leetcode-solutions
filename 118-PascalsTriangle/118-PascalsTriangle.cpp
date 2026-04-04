// Last updated: 4/5/2026, 12:15:06 AM
class Solution {
public:
vector<int>generateRow(int n)
{long long  ans=1;
vector<int>row;
row.push_back(ans); 
    for(int i=0;i<n;i++)
    {
        ans*=(n-i);
        ans/=i+1;
        row.push_back(ans);
    }
    return row;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
       for(int i=0;i<numRows;i++)
       {
          result.push_back(generateRow(i));
       }
       return result; 
    }
};