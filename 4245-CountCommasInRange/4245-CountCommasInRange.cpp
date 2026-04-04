// Last updated: 4/5/2026, 12:10:43 AM
class Solution {
public:
    int countCommas(int n) {
        vector<int>digits;
        if(n<(int)1e3) return 0;

        int temp=n;
        while(n>0)
            {
                digits.push_back(n%10);
                n/=10;
            }
        if(digits.size()==4)
            return temp+1-1000;
        if(digits.size()==5)
            return temp+1-1000;
        else return temp+1-1000;
    }
};