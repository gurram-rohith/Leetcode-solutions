class Solution {
public:
    int M=1e9+7;
    long long fun(int a,int b){
        if(b==0) return 1;
        long long res=1,x=a%M;
        while(b>0){
        if(b&1){
            res=(res*x)%M;
            b-=1;
        }
            else{
            x=(x*x)%M;
            b/=2;
            }
        }
        return res%M;
    }
    static bool comp(pair<int,int> a,pair<int,int> b){
        if(a.second==0 && b.second) return true;
        if(a.second && b.second==0) return false;
        if(a.first > b.first) return true;
        if(a.first==b.first){
            if(a.second<b.second) return true;
            return false;
        }
        return false;
    }
    int maxValue(vector<int>& nums1, vector<int>& nums0) {
        vector<pair<int,int>> arr;
        for(int i=0;i<nums1.size();i++){
            arr.push_back({nums1[i],nums0[i]});
        }
        sort(begin(arr),end(arr),comp);
        string s="";
       for(int i=arr.size()-1;i>=0;i--){
           int zeroes=arr[i].second;
           int ones=arr[i].first;
           while(zeroes--){
               s+='0';
           }
           while(ones--){
               s+='1';
           }
       }
        reverse(begin(s),end(s));
        long long ans=0;
        int k=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                int x=fun(2,k)%M;
                ans=(ans+x)%M;
            }
            k++;
        }
        return (int)ans;
    }
};