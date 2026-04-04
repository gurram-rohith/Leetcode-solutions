// Last updated: 4/5/2026, 12:13:43 AM
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int len=0;
        for(int i=0;i<bits.size();)
        {
            if(bits[i]==0)
            len=1,i++;
            else{
                i+=2;
                len=2;
            }
        }
        if(len==2) return false;
        else
        return true;
    }
};