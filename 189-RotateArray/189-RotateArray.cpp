// Last updated: 4/5/2026, 12:14:43 AM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x=nums.size();
        int arr[x];
        int j=0;
        k=k%x;
        if(k==0)
        return;
        for(int i=(x-k);;)
        {
arr[j++]=nums[i];
i=(i+1)%x;
if(j==x)
break;
        }
        for(int i=0;i<x;i++)
        nums[i]=arr[i];
       
    }
};