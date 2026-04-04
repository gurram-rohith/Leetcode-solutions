// Last updated: 4/5/2026, 12:13:32 AM
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int minans=INT_MAX;
        vector<int>front(n);
        vector<int>curr(n);
        for(int i=0;i<n;i++)
        front[i]=matrix[0][i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int ld=INT_MAX,rd,before;
                rd=ld,before=ld;
                if(j>=1)
                 ld=matrix[i][j]+front[j-1];
                 if(j<n-1)
                 rd=matrix[i][j]+front[j+1];
                 before=matrix[i][j]+front[j];
                 curr[j]=min({ld,rd,before});
            }
            front=curr;
        }
        for(int i=0;i<n;i++)
        minans=min(minans,front[i]);
        return minans;
    }
};