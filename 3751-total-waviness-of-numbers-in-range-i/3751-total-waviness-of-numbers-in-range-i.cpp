class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=max(100,num1);i<=num2;i++)
        {
            int temp=i;
            vector<int>t;
            while(temp>0)
            {
                t.push_back(temp%10);
                temp/=10;
            }
            reverse(t.begin(),t.end());
            for(int i=1;i<t.size()-1;i++)
            {
                if((t[i]>t[i-1]&&t[i]>t[i+1])||(t[i]<t[i-1]&&t[i]<t[i+1]))
                ans++;
            }
        }
        return ans;
    }
};