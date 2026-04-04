// Last updated: 4/5/2026, 12:14:41 AM
class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
        return true;
        else
        {
          int num=n;
          int sum=0;
          while(num>0)
          {
            sum+=(num%10)*(num%10);
            num=num/10;
          }
          if(sum>6||sum==1)
        return isHappy(sum);
          else if(sum<=6&&sum!=1)
          return false;
        }
        return true;
    }
};