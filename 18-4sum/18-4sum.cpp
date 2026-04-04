// Last updated: 4/5/2026, 12:15:59 AM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>>ans;
        if(nums.size()<=3) return ans ;
        sort(nums.begin(),nums.end());
        int i,j,k,l;
        long long sum=0;
        i=0,j=1,k=2,l=nums.size()-1;
        for( i=0;i<nums.size()-3;i++)
        {  cout<<nums[i]<<endl;
            if(i>0)
            {
                if(nums[i]==nums[i-1]) continue;
            }

           for( j=i+1;j<nums.size()-2;j++)
           {  
               l=nums.size()-1;
                if(j>i+1)
                { 
                if(nums[j]==nums[j-1]) continue;
                }
                k=j+1;
               while(k<l)
               {
                   sum=nums[i];
                   sum+=nums[j];
                   sum+=nums[k];
                   sum+=nums[l];
                   if(sum<target)
                   k++;
                   else if(sum>target)
                   l--;
                   else
                   {
                    vector<int>temp;
                    temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++,l--;
                    while(k<l&&nums[k]==nums[k-1]) k++;
                    while(k<l&&nums[l]==nums[l+1]) l--;
                    sum=0;
                   }
               }
           }
        }
        
        return ans;
    }
};