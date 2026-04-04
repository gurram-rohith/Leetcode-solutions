// Last updated: 4/5/2026, 12:15:36 AM
class Solution {
public:
    void Nqueen(map<int,int>&d1,map<int,int>&d2,map<int,int>&cmp,vector<string>&temp,vector<vector<string>>&ans,int i,int n)
    {
        string st;
        if(i==n)
        {
            ans.push_back(temp);
            return;
        }
        for(int k=0;k<n;k++)
        {
            if(d1.find(k-i)!=d1.end()||cmp.find(k)!=cmp.end()||d2.find(k+i)!=d2.end())
            {
            continue;
            }
            cmp[k]=1;
            d1[k-i]=1;
            d2[k+i]=1;
            for(int m=0;m<k;m++)
            st.push_back('.');
            st.push_back('Q');
            for(int m=k+1;m<n;m++)
            st.push_back('.');
            temp.push_back(st);
            st.clear();
            Nqueen(d1,d2,cmp,temp,ans,i+1,n);
            temp.pop_back();
            cmp.erase(k);
            d1.erase(k-i);
            d2.erase(k+i);
        }
        

    }
    vector<vector<string>> solveNQueens(int n) {
        map<int,int>cmp,d1,d2;
        vector<string>temp;
        vector<vector<string>>ans;
        Nqueen(d1,d2,cmp,temp,ans,0,n);
        return ans;
    }
};