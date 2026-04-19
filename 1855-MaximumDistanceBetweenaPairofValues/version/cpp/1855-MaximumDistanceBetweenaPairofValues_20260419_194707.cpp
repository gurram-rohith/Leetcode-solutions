// Last updated: 4/19/2026, 7:47:07 PM
1class Solution {
2public:
3    int binsearch(int num,vector<int>&nums2,int i)
4    {
5        int low=i,high=nums2.size()-1,ans=0;
6        while(low<=high)
7        {
8            int mid=low+(high-low)/2;
9            if(num<=nums2[mid])
10            {
11                ans=mid;
12                low=mid+1;
13            }
14            else high=mid-1;
15        }
16        return ans;
17    }
18    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
19        int maxdist=0;
20        for(int i=0;i<nums1.size();i++)
21        {
22            maxdist=max(maxdist,binsearch(nums1[i],nums2,i)-i);
23        }
24        return maxdist;
25    }
26};