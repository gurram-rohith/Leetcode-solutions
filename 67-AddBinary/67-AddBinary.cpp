// Last updated: 4/5/2026, 12:15:24 AM
class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        int carry=0;
        int in;
        string ans;
        while(i>=0&&j>=0){
            in=a[i]-'0'+b[j]-'0'+carry;
            if(in==3){
                ans.insert(ans.begin()+0,'1');
                carry=1;
            }
            else if(in==2){
                ans.insert(ans.begin()+0,'0');
                carry=1;
            }
            else if(in==1){
                ans.insert(ans.begin()+0,'1');
                carry=0;
            }
            else{
                ans.insert(ans.begin()+0,'0');
                carry=0;
            }
            i--,j--;
        }
        while(i>=0){
            in=a[i]+carry-'0';
             if(in==2){
                ans.insert(ans.begin()+0,'0');
                carry=1;
            }
            else if(in==1){
                ans.insert(ans.begin()+0,'1');
                carry=0;
            }
            else{
                ans.insert(ans.begin()+0,'0');
                carry=0;
            }
            i--;
        }
        while(j>=0){
            in=b[j]+carry-'0';
             if(in==2){
                ans.insert(ans.begin()+0,'0');
                carry=1;
            }
            else if(in==1){
                ans.insert(ans.begin()+0,'1');
                carry=0;
            }
            else{
                ans.insert(ans.begin()+0,'0');
                carry=0;
            }
            j--;
        }
        cout<<carry<<endl;
        if(carry==1)
        ans.insert(ans.begin()+0,'1');
        return ans;
    }
};