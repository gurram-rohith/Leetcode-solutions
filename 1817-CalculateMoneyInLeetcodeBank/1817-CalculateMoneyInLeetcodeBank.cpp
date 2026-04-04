// Last updated: 4/5/2026, 12:13:01 AM
class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int mon;
        int ele;
        if(n<=7)
        return n*(n+1)/2;
        else{
           ans+=(n/7)*28+(((n/7-1)*(n/7))/2)*7;
           if(n%7!=0){
            ele=n%7;
            mon=n/7+1;
            for(int i=1;i<=ele;i++){
                ans+=mon;
                mon+=1;
            }
           }

        }
        return ans;
    }
};