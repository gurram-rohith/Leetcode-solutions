// Last updated: 4/5/2026, 12:15:55 AM
class Solution {
public:
    void genPar(int i,int n,int cl,int cr,string &temp,vector<string>&ans)
    {
        if(i==2*n)
        {
            ans.push_back(temp);
            return ;
        }
        if(cl<n)
        {
                temp.push_back('(');
                genPar(i+1,n,cl+1,cr,temp,ans);
                temp.pop_back();
        }
        if(cr<cl)
        {
                temp.push_back(')');
                genPar(i+1,n,cl,cr+1,temp,ans);
                temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string>ans;
        genPar(0,n,0,0,temp,ans);
        return ans;

    }
};