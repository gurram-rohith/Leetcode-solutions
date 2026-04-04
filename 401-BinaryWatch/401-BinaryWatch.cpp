// Last updated: 4/5/2026, 12:14:07 AM
class Solution {
public:
    void genTime(int turnedOn,vector<string>&ans,int i,int h,int m)
    {
        if(h>11||m>59) return;
        
        if(turnedOn==0)
        {
            string temp=to_string(h)+":";
            if(m<10)
            {
                temp+=to_string(0);
            }
            temp+=to_string(m);
            ans.push_back(temp);
            return;
        }
        if(i==10) return;
        if(i<4)
        genTime(turnedOn-1,ans,i+1,h+(1<<i),m);
        else
        genTime(turnedOn-1,ans,i+1,h,m+(1<<(i-4)));
        genTime(turnedOn,ans,i+1,h,m);

    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>ans;
        genTime(turnedOn,ans,0,0,0);
        return ans;
    }
};