// Last updated: 4/5/2026, 12:12:33 AM
class Solution {
public:
    string sortVowels(string s) {
       vector<char>vowels;
       int k=0;
     vector<int>indices;
        int siz=s.size();
       string t;
       for(int i=0;i<s.size();i++)
       {
        t.push_back('{');
       }
       for(int i=0;i<s.size();i++)
       {
        if((s[i]!='a'&&s[i]!='A')&&(s[i]!='e'&&s[i]!='E')&&(s[i]!='i'&&s[i]!='I')&&(s[i]!='o'&&s[i]!='O')&&(s[i]!='U'&&s[i]!='u'))
        {   
            t[i]=s[i];
        }
        else
        {   
            vowels.push_back(s[i]);
            t[i]='-';
            indices.push_back(i);
        }
       }
      sort(vowels.begin(),vowels.end());
       if(vowels.size()==0) return s;
      for(int i=0;i<vowels.size();i++)
       {
        
        t[indices[k]]=vowels[i];
        k++;
       }
       return t;
    }
};