// Last updated: 4/5/2026, 12:16:06 AM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxans=INT_MIN;
        int currentheight=0;
        while(i<height.size()&&j>0){
            currentheight=min(height[i],height[j]);
            maxans=max(maxans,(j-i)*currentheight);
           if(height[i]<height[j])
           i++;
           else
           j--;
        }
        return maxans;
    }
};