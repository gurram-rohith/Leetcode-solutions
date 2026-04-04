// Last updated: 4/5/2026, 12:15:46 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin=0,end=nums.size()-1,mid,f=0;
        mid=(begin+end)/2;
        while(begin<=end){
            if(nums[mid]==target)
           { f=1;
            return mid;}
            else if(nums[mid]>target)
            {
                end=mid-1;
                mid=(begin+end)/2;
            }
            else if(nums[mid]<target)
            {
                begin=mid+1;
                mid=(begin+end)/2;
            }  
        }
        if(f==0)
        {
            if(target>nums[mid])
            return mid+1;
            else return mid;
        }
return -1;
    }
};