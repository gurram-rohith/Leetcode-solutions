// Last updated: 4/5/2026, 12:13:10 AM
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        long long M=m;
        long long K=k;
        long long a=M*K;
       if(a>bloomDay.size()) return -1;
       cout<<bloomDay.size()<<endl;
       int maxboq=0;
       int minele=INT_MAX,maxele=INT_MIN;
       for(int i=0;i<bloomDay.size();i++){
        minele=min(minele,bloomDay[i]);
        maxele=max(maxele,bloomDay[i]);
       }
       if(a==bloomDay.size())
       return maxele;
       int low=minele,high=maxele,count=0;
       int mid;
       while(low<=high){
        mid=low+(high-low)/2;
        // cout<<mid<<endl;
        // cout<<mid<<endl;
        for(int i=0;i<bloomDay.size();i++){
           
            if(bloomDay[i]<=mid)
            count++;
            else{
               maxboq+=count/k;
               count=0;
            }
        }
        maxboq+=count/k;
        count=0;
        if(maxboq>=m)
       { 
        // cout<<low<<high<<endl;
         if(low==high)
       return low;
         high=mid-1;
        //  cout<<maxboq<<" "<<mid<<endl;

        maxboq=0;}
        else if(maxboq<m)
        {low=mid+1;
        maxboq=0;
        // cout<<low<<high<<endl;}
       }
      
    }
    
       if(maxboq==m)
       return mid;
       else
       return low;
     return 0; 
    }
};