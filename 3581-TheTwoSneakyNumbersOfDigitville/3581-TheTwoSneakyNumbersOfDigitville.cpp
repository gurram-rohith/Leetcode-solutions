// Last updated: 4/5/2026, 12:12:15 AM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       int hasharr[101]={0};
      vector<int>ans;
       for(int i=0;i<nums.size();i++)
       {
        hasharr[nums[i]]++;
       }
       for(int i=0;i<101;i++){
         if(hasharr[i]==2)
            {ans.push_back(i);
            hasharr[i]=0;}
         if(ans.size()==2)
         return ans;
           
       }
       return ans;
    }
};