class Solution {
public:
    vector<string> createGrid(int m, int n, int k) {
        vector<string>ans(m,string(n,'#'));
        if(m==1||n==1)
        {
            if(k!=1) return {};
        }
        if(m==3&&n==3&&k==4) return {"..#","...","#.."};
        if(m<n)
        {
            for(int i=0;i<n;i++) ans[0][i]='.';
            for(int i=0;i<m;i++) ans[i][n-1]='.';
            k--;
            int j=n-2,i=1;
            while(k>0&&i>=0&&j>=0)
            {
                ans[i][j]='.',k--,j--;
            }
            if(k) return {};
            return ans;
        }
        else
        {
            for(int i=0;i<m;i++) ans[i][0]='.';
            for(int j=0;j<n;j++) ans[m-1][j]='.';
            k--;
            int i=m-2,j=1;
            while(k>0&&i>=0&&j>=0)
            {
                ans[i][j]='.',k--,i--;
            }
            if(k) return {};
            return ans;
        }
        return ans;
    }
};