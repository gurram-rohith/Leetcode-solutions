class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=1001,maxii=0;
        for(int i:nums) mini=min(mini,i),maxii=max(maxii,i);
        return __gcd(mini,maxii);
    }
};