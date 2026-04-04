// Last updated: 4/5/2026, 12:12:01 AM
class Solution {
public:
    int maxFreqSum(string s) {
        int n=s.size();
        int maxvowel=0,maxconso=0;
       map<char,int>mp;
       for(int i=0;i<n;i++)
       {
        mp[s[i]]++;
       }
       for(auto it:mp){
          if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u')
          maxvowel=max(maxvowel,it.second);
          else
          maxconso=max(maxconso,it.second);
       }
        return maxconso+maxvowel;
    }
};