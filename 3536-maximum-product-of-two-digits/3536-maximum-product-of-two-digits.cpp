class Solution {
public:
    int maxProduct(int n) {
        vector<int>t;
        while(n)
        {
            t.push_back(n%10);
            n/=10;
        }
        sort(t.begin(),t.end(),greater<int>());
        return t[0]*t[1];
    }
};