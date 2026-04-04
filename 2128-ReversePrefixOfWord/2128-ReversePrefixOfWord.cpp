// Last updated: 4/5/2026, 12:12:51 AM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i;
        for( i=0;i<word.size();i++)
        {
            if(word[i]==ch){
                break;
            }
        }
        if(i==word.size()) return word;
        int j=0;
        while(j<=i)
        {
            char temp=word[j];
            word[j]=word[i];
            word[i]=temp;
            j++;
            i--;
        }
        return word;
    }
};