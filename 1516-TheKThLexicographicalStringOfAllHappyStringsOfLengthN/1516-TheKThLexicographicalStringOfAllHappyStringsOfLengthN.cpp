// Last updated: 4/5/2026, 12:13:14 AM
class Solution {
public:
    void genStrings(string &temp,vector<string>&ans,int j,int n,char prev,int k)
    {
        if(ans.size()>k) return;
        if(j==n) 
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<3;i++)
        {
            if(prev==('a'+i)) continue;
            if(prev!=('a'+i))
            {
                char p=prev;
                temp.push_back('a'+i);
                genStrings(temp,ans,j+1,n,'a'+i,k);
                temp.pop_back();
                prev=p;
            }
            // genStrings(temp,ans,i+1,n,prev,k);
        }
    }
    string getHappyString(int n, int k) {
        string temp;
        vector<string>ans;
        genStrings(temp,ans,0,n,'.',k);
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<n;j++) cout<<ans[i][j];
            cout<<endl;
        }
        if(ans.size()<k) return "";
        return ans[k-1];
    }
};