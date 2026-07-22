class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int n=s.size();
        vector<bool>ans(strs.size(),false);
        vector<int>oness(s.size()+1,0);
        for(int i=0;i<n;i++)
        {
            oness[i+1]=oness[i]+(s[i]-'0');
        } 
        for(int i=0;i<strs.size();i++)
        {
            vector<int>pre1(strs[i].size()+1,0),preqc(strs[i].size()+1,0);
            int len=strs[i].size();
            for(int j=0;j<len;j++)
            {
            pre1[j+1] = pre1[j];
            preqc[j+1] = preqc[j];

            if(strs[i][j]=='1')
            pre1[j+1]++;
            else if(strs[i][j]=='?')
            preqc[j+1]++;
            }
            int onespresent=pre1[len];
            int requiredones=oness[n]-onespresent;
            if(requiredones>preqc[len]||requiredones<0) continue;
            int accones=preqc[len]-requiredones;
            bool ok=true;
            for(int k=1;k<=len;k++)
            {
                int bk=pre1[k]+max(0,preqc[k]-accones);
                if(bk>oness[k])
                {
                    ok=false;
                    break;
                }
            }
            ans[i]=ok;
        }
        return ans;
        
    }
};