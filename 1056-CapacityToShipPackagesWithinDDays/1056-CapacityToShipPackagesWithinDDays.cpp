// Last updated: 4/5/2026, 12:13:26 AM
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxiele=INT_MIN;
        int totalSum;
        for(int i=0;i<weights.size();i++){
            totalSum+=weights[i];
            maxiele=max(maxiele,weights[i]);
        }
        int low=maxiele,high=totalSum;
        int mid;
        int d=1,currsum=0;
        while(low<=high){
            mid=low+(high-low)/2;
            d=1,currsum=0;
            for(int i=0;i<weights.size();i++){
              if(currsum+weights[i]>mid)
              {
                currsum=weights[i];
                d+=1;
              }
              else {
                currsum+=weights[i];
              }
            }
            if(d>days){
                low=mid+1;
            }
            else
            high=mid-1;
        }
       return low;
    }
};