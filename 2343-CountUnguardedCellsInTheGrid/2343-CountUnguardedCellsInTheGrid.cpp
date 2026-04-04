// Last updated: 4/5/2026, 12:12:41 AM
class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>arr(m,vector<int>(n,0));
        int grow,gcol,wrow,wcol,cnt=0;
        for(int i=0;i<guards.size();i++)
        {
            grow=guards[i][0];
            gcol=guards[i][1];
            arr[grow][gcol]=-1;
        }
        for(int i=0;i<walls.size();i++)
        {
            wrow=walls[i][0];
            wcol=walls[i][1];
            arr[wrow][wcol]=-1;
        }
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        for(int i=0;i<guards.size();i++)
       { for(int d=0;d<4;++d)
        {
            int r=guards[i][0]+dr[d];
            int c=guards[i][1]+dc[d];
            while(r>=0 && c>=0 && r<m && c<n && arr[r][c]!=-1)
            {
                arr[r][c]=1;
                r+=dr[d];
                c+=dc[d];
            }
        }
        }
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(arr[i][j]==0)
                cnt++;
            }
        }
  return cnt;
    }
};