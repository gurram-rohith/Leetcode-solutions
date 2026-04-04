// Last updated: 4/5/2026, 12:16:07 AM
class Solution {
public:
    bool isPalindrome(int x) {
         long int r,num=0,t;
        //cin>>x;
        t=x;
        if(x<0)
       return 0;
        else{
        while(x>0)
       {
         r=x%10;
        num=num*10+r;
        x=x/10;
        }
        if(num==t)
       return 1;
        else
         return 0;
        }
    
    }
};