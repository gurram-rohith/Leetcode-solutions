class Solution {
public:
    int binsearch(int num,vector<int>&nums2,int i)
    {
        int low=i,high=nums2.size()-1,ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(num<=nums2[mid])
            {
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxdist=0;
        for(int i=0;i<nums1.size();i++)
        {
            maxdist=max(maxdist,binsearch(nums1[i],nums2,i)-i);
        }
        return maxdist;
    }
};