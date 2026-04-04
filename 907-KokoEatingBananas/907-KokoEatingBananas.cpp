// Last updated: 4/5/2026, 12:13:35 AM
class Solution {
public:
     long long totalHours(vector<int>&temp,int h){
        long long sum=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]%h!=0){
                sum+=temp[i]/h+1;
            }
            else
            sum+=temp[i]/h;
        }
        return sum;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size()==1)
        {
            if(piles[0]%h!=0)
            return piles[0]/h+1;
        }
        int miniele=INT_MAX,maxele=INT_MIN;
        vector<int>temp;
        for(int i=0;i<piles.size();i++){
           miniele=min(miniele,piles[i]);
           maxele=max(maxele,piles[i]);
           temp.push_back(piles[i]);
        }
        int low=1,high=maxele,mid;
        while(low<=high){
            mid=low+(high-low)/2;
           if(totalHours(temp,mid)>h){
            low=mid+1;
           }
           else if(totalHours(temp,mid)<=h){
            high=mid-1;
           }
        }
        cout<<low<<" "<<mid<<" "<<high<<endl;
         return low;
    }
};