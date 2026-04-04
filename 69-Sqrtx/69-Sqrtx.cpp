// Last updated: 4/5/2026, 12:15:23 AM
class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        long long  low=0,high=x/2;
        long long int mid;
        while(low<high){
            mid=low+(high-low)/2;
            if(round((mid)*(mid))==x) return mid;
            else if(round((mid)*(mid))>x){
                if(round((mid+1)*(mid+1))<x&&round(mid*mid)>x) return mid;
                cout<<mid/1.0<<endl;
                high=mid-1;
            }
            else{
                if(round((mid+1)*(mid+1))>x&&round(mid*mid)<x) return mid;
                low=mid+1;
            }
        }
       return low; 

    }
};