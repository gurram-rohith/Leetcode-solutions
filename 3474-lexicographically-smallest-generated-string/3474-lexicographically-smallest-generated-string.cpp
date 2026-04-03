class Solution {
public:
    string generateString(string str1, string str2) {
        int n=str1.length(),m=str2.length();
        string ans(n+m-1,'?');
        for(int i=0;i<n;i++)
        {
            if(str1[i]!='T') continue;
            // if true copy the string
            for(int j=0;j<m;j++)
            {
                char c=ans[i+j];
                // if it is already matching then it is false
                if(c!='?'&&c!=str2[j])
                {
                    return "";
                }
                ans[i+j]=str2[j];
            }
        }
        // to make lexicographically smallest place 'a' at unoccupied
        string oldans=ans;
        for(char &c:ans)
        {
            if(c=='?')
            c='a';
        }
        for(int i=0;i<n;i++)
        {
            if(str1[i]!='F') continue;

            // if false check whether it is matching if not just continue
            if(ans.substr(i,m)!=str2) continue;
            int f=0;
            // to handle false case just keep the last unoccupied char to 'b' to make it lexicographically smallest
            for(int j=i+m-1;j>=i;j--)
            {
                if(oldans[j]=='?')
                {
                    ans[j]='b';
                    f=1;
                    break;
                }
            }
            if(!f) return "";
        }
        return ans;
    }
};