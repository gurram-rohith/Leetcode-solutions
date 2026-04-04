// Last updated: 4/5/2026, 12:14:05 AM
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        char ch;
        long long n1,n2,carry=0,sum=0;
        long long  i=num1.size()-1,j=num2.size()-1;
        while(i>=0&&j>=0){
           n1=num1[i]-'0';
           n2=num2[j]-'0';
           ans.insert(ans.begin()+0,(n1+n2+carry)%10+'0');
           carry=(n1+n2+carry)/10;
           i--,j--;
        }
       
        while(i>=0){
            n1=num1[i]-'0';
            ans.insert(ans.begin()+0,(n1+carry)%10+'0');
            carry=(n1+carry)/10;
            i--;
        }
        while(j>=0){
            n1=num2[j]-'0';
            ans.insert(ans.begin()+0,(n1+carry)%10+'0');
            carry=(n1+carry)/10;
            j--;
        }
     if(carry!=0) ans.insert(ans.begin()+0,carry+'0');
       
       cout<<ans[0];
        return ans;
    }
};