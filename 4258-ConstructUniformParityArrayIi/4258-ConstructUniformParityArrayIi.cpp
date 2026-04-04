// Last updated: 4/5/2026, 12:10:36 AM
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int codd=0;
        for(int i:nums1)
            {
                if(i&1) codd++;
            }
        if(codd!=0&&codd!=nums1.size())
        {
           sort(nums1.begin(), nums1.end());
        int smallestOdd = INT_MAX;
        for (int x : nums1) {
        if (x % 2 == 1) {
            smallestOdd = min(smallestOdd, x);
        } else {
            if (smallestOdd == INT_MAX || smallestOdd >= x) {
                return false;
            }
        }
    }
    return true;
            
        }
        return true;
    }
};