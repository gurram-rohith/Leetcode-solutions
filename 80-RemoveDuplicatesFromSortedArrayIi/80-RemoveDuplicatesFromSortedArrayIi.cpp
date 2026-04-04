// Last updated: 4/5/2026, 12:15:14 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int k=1;
        for(int i=1;i<nums.size();i++){
            
           if(nums[i-1]==nums[i])
           {count++;
           k++;}
            cout<<count<<endl;
           if(count>2){
            while(count>2)
            {nums.erase(nums.begin()+i);
            i--;
            count--;
            k--;}
           }
           if(nums[i]!=nums[i-1])
          { count=1;
           k++;}
          
        }
        return k;
    }
};