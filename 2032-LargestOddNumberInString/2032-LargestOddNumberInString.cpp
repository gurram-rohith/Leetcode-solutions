// Last updated: 4/5/2026, 12:12:55 AM
class Solution {
public:
    string largestOddNumber(string num) {
        long long digit;
        string ans;
        int i;
        for( i=num.size()-1;i>=0;i--){
            digit=num[i]-'0';
            if(digit%2!=0)
            break;
        }
        if(i==-1)
        return "";
        else
        {
            for(int j=0;j<=i;j++){
              ans+=num[j];
            }
        }
        return ans;
    }
};