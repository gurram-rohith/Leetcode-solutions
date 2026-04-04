// Last updated: 4/5/2026, 12:13:36 AM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int tenrup=0,fiverup=0,twenrup=0;
        if(bills[0]>5) return false;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            fiverup++;
            else if(bills[i]==10)
            {
                if(fiverup>=1)
                tenrup++,fiverup--;
                else
                return false;
            }
            else if(bills[i]==20)
            {
                if(tenrup>=1&&fiverup>=1)
                {
                    tenrup--,fiverup--;
                }
                else if(fiverup>=3)
                {
                    fiverup-=3;
                }
                else
                return false;
                twenrup++;
            }
        }
        return true;
    }
};