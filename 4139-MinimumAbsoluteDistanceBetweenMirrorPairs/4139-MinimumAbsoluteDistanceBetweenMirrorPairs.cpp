// Last updated: 4/5/2026, 12:11:17 AM
class Solution {
public:
    long long reverse(int a)
    {
        long long temp=0;
        while(a>0)
            {
                temp=temp*10+a%10;
                a/=10;
            }
        return temp;
    }
    int minMirrorPairDistance(vector<int>& nums) {
           map<int,vector<int>>mpp;
        int minlen=INT_MAX,temp;
        
        for(int i=0;i<nums.size();i++)
            {
                mpp[nums[i]].push_back(i);
            }
            for(auto it=mpp.begin();it!=mpp.end();++it)
            {
                if(mpp.find(reverse(it->first))!=mpp.end())
                {
                    auto it2=mpp.find(reverse(it->first));
                    vector<int>&one=it->second;
                    vector<int>&two=it2->second;
                    int i=0,j=0;
                    while(i<one.size()&&j<two.size())
                        {
                            temp=one[i]-two[j];
                            cout<<temp<<endl;
                            if(temp<0)
                            { i++;
                                minlen=min(minlen,temp*(-1));}
                            else
                                j++;
                        }
                    
                    
                }
            }
        if(minlen==INT_MAX) return -1;
        return minlen;
        
        
    }
};