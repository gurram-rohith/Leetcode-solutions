// Last updated: 4/5/2026, 12:11:31 AM
class Solution {
public:
    bool checkprime(long long n)
    {
        if(n==1) return false;
        for(long long i=2;i*i<=n;i+=1)
                { 
                if(n%i==0)
                {
                return false;
                 }
            }
        return true;
    }
    bool completePrime(int num) {
        vector<long long>arr;
        long long temp,rem;
        temp=num;
        while(temp>0)
            {
                rem=temp%10;
                arr.insert(arr.begin()+0,rem);
                temp/=10;
            }
        int l=0,r=arr.size()-1;
        long long t1,t2;
        int n=arr.size();
        
        
        
        while(l<=n-1)
            {
                if(l==0)
                {
                    if(!checkprime(arr[l]))
                        return false;
                    t1=arr[l];
                    
                }
                else{
                    t1=t1*10+arr[l];
                
                    if(!checkprime(t1))
                        return false;
                    
                }
                l++;
            }
        while(r>=0)
            {
                if(r==n-1)
                {
                    if(!checkprime(arr[r]))
                        return false;
                    t2=arr[r];
                    
                }
                else{
                    t2 = arr[r]*pow(10,(n-1-r)) + t2 ;

                
                    if(!checkprime(t2))
                        return false;
                    
                }
                r--;
            }
        if(!checkprime(num))
            return false;
        
        return true;
    }
};