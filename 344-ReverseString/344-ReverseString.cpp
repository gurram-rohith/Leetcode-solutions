// Last updated: 4/5/2026, 12:14:13 AM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        char temp;
        while(i<=j&&i<s.size()){
           temp=s[i];
           s[i]=s[j];
           s[j]=temp;
           i++,j--;
        }
    }
};