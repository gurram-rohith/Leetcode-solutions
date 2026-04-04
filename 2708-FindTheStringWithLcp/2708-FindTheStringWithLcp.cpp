// Last updated: 4/5/2026, 12:12:36 AM
class Solution {
public:
    string findTheString(vector<vector<int>>& lcp) {
        string ans;
        int temp=lcp.size();
        int n=temp;
       if(n==1)
       {
        if(lcp[0][0]==1) return "a";
        return "";
       }
        for(int i=0;i<n;i++)
        {
            if(lcp[i][i]!=n-i)
            {
                return "";
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(lcp[i][j]>min(n-j,n-i))
                {
                    return "";
                }
                if(lcp[i][j]!=lcp[j][i]) return "";
            }
        }
        string word(n,0);
       char nextChar='a';
       for(int i=0;i<n;i++)
       {
            if(word[i]!=0) continue;
            if(nextChar>'z') return "";
            word[i]=nextChar;
            for(int j=i+1;j<n;j++)
            {
                if(lcp[i][j]>0)
                {
                    word[j]=nextChar;
                }
            }
            nextChar++;
       }
       int expected;
       for(int i=n-1;i>=0;i--)
       {
        for(int j=n-1;j>=0;j--)
        {
            if(word[i]==word[j])
            {
                expected=1+(i+1<n&&j+1<n?lcp[i+1][j+1]:0);
            }
            else expected=0;
            if(lcp[i][j]!=expected) return "";
        }
       }
       return word;
    }
};