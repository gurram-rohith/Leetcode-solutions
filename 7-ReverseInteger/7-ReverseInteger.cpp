// Last updated: 4/5/2026, 12:16:09 AM
class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN||x==INT_MAX) return 0;
       int maxi=INT_MIN;
       long long var;
       int mini=INT_MAX;
       long long rev=0;
       long long temp=x;
       if(temp<0)
       temp*=-1;
       while(temp>0){
        cout<<rev<<endl;
       var=rev*10+temp%10;
       if(var>INT_MAX) return 0;
        rev=rev*10+temp%10;
        temp=temp/10;
       }
       if(x<0){
        rev*=-1;
         return rev;
       }
       else{
        return rev;
       }


    }
};