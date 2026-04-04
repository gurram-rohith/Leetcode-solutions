// Last updated: 4/5/2026, 12:11:41 AM
class Solution {
public:
    typedef long long ll;
    map<string,int>mp;
    int func(vector<int>&nums,int i,ll k,ll num,ll den)
    {
       ll g=std::gcd(num,den);
       num/=g,den/=g;
       if(i==nums.size())
      {if(num % den != 0) return 0;
        return (num / den == k);}
       string s;
       s=to_string(num)+','+to_string(den)+','+to_string(i);
       if(mp.count(s)) return mp[s];
       return mp[s]=func(nums,i+1,k,num*nums[i],den)+func(nums,i+1,k,num,den*nums[i])+func(nums,i+1,k,num,den);

    }
    int countSequences(vector<int>& nums, long long k) {
        return func(nums,0,k,1,1);
    }
};