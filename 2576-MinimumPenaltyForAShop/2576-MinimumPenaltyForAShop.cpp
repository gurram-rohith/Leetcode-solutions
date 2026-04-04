// Last updated: 4/5/2026, 12:12:38 AM
class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int>prefixn(customers.size()+1,0),suffixy(customers.size()+1,0);

        for(int i=0;i<customers.size();i++)
        {
            if(customers[i]=='N')
            {
                prefixn[i+1]=prefixn[i]+1;
            }
            else
            prefixn[i+1]=prefixn[i];
        }
        for(int i=customers.size()-1;i>=0;i--)
        {
            if(customers[i]=='Y')
            {
                suffixy[i]=suffixy[i+1]+1;
            }
            else
            suffixy[i]=suffixy[i+1];
        }
        int minpenalty=INT_MAX,ans=0,penalty;
        for(int i=0;i<=customers.size();i++)
        {

            penalty=suffixy[i]+prefixn[i];
            cout<<penalty<<endl;
            if(penalty<minpenalty)
            {
                minpenalty=penalty;
                ans=i;
            }
        }
        // cout<<minpenalty<<endl;
        return ans;

        

    }
};