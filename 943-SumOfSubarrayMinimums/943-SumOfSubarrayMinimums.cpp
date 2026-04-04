// Last updated: 4/5/2026, 12:13:34 AM
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int>nsestack,psestack;
        long long ans=0;
        vector<int>nse(arr.size(),0),pse(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            
                while(!nsestack.empty()&&arr[nsestack.top()]>=arr[i])
                nsestack.pop();
                if(!nsestack.empty())
                {
                    nse[i]=nsestack.top();
                    
                }
                else
                nse[i]=arr.size();
                nsestack.push(i);
        }
        for(int i=0;i<arr.size();i++)
        {
            
                while(!psestack.empty()&&arr[psestack.top()]>arr[i])
                psestack.pop();
                if(!psestack.empty())
                {
                    pse[i]=psestack.top();
                    
                }
                else{
                    pse[i]=-1;
                }
                psestack.push(i);
        }
        for(int i=0;i<arr.size();i++)
        {
           
            int prevele,afterele;
            prevele=(i-pse[i]);
            afterele=(nse[i]-i);
            // cout<<prevele<<" "<<afterele<<endl;
            long long mod=1e9+7;
            mod=(int)(mod);
            prevele%=mod;
            afterele%=mod;
            ans=ans+(((((prevele*afterele)%mod)*arr[i])%mod)*1LL)%mod;
            
            ans=ans%mod;

        }
        
        return ans;

    }
};