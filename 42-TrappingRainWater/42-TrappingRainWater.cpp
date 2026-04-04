// Last updated: 4/5/2026, 12:15:43 AM
class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0,rmax=0,ans=0;
        int l=0,r=height.size()-1;
        while(l!=r)
        {
            if(height[l]<=height[r])
            {
                if(lmax>height[l])
                {
                    ans+=lmax-height[l];
                }
                else
                lmax=height[l];
                l++;
            }
            else if(height[r]<height[l])
            {
                if(rmax>height[r])
                {
                    ans+=rmax-height[r];

                }
                else
                rmax=height[r];
                r--;
            }
        }
        return ans;
    }
};