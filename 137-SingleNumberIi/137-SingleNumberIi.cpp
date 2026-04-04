// Last updated: 4/5/2026, 12:14:55 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans=0;
       int count=0;
       for(int i=0;i<32;i++){
        count=0;
          for(int n:nums){
            if(n&(1<<i))
            count++;
          }
          if(count%3!=0&&i!=31)
          ans+=pow(2,i)*1;
          else if(count%3!=0&&i==31)
          ans+=pow(2,i)*-1;
          else
          ans+=0;
         
       }
       return ans;
    }
};