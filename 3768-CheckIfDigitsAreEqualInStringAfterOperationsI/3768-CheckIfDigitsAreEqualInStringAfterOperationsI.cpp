// Last updated: 4/5/2026, 12:12:09 AM
class Solution {
public:
// bool isPalindrome(string s){
//     int count=0;
//     int i=0,j=s.size()-1;
//     while(i<=j){
//         if(s[i]==s[j])
//         count++;
//         else
//         return false;
//     }
//     if(count==(s.size()+1)/2) return true;
//     else
//     return false;
// }

    bool hasSameDigits(string s) {
        int a,b;
        while(s.size()!=2)
        {for(int i=0;i<s.size()-1;i++){
           a=s[i]-'0';
           b=s[i+1]-'0';
           s[i]=(a+b)%10+'0';
        }
        s.erase(s.end()-1);
        }
        if(s[0]==s[1]) return true;
        else
        return false;
    }
};