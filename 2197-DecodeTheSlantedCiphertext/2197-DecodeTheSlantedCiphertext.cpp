// Last updated: 4/5/2026, 12:12:47 AM
class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int len=encodedText.size();
        int cols=len/rows;
        int k=0;
        string ans;
        vector<vector<char>>grid(rows,vector<char>(cols));
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                grid[i][j]=encodedText[k++];
            }
        }
        int i=0,j=0;
        for(int k=0;k<cols;k++)
        {
            ans+=grid[i][k];
            j=k;
            while(i+1<rows&&j+1<cols)
            {
                ans+=grid[i+1][j+1];
                i+=1,j+=1;
            }
            i=0;
        }
        i=ans.size()-1;
        while(i>=0&&ans[i]==' ') i--;
        ans.erase(ans.begin()+i+1,ans.end());
        return ans;
    }
};