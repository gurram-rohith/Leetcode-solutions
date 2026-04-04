// Last updated: 4/5/2026, 12:13:41 AM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        int f=0;
        for(int i=0;i<asteroids.size();i++)
        {
            if(asteroids[i]>0)
            s.push(asteroids[i]);
            else{
                while(!s.empty())
                {
                    if(s.top()<0)
                    break;
                    else{
                        if(s.top()>asteroids[i]*(-1))
                        {
                            f=1;
                            break;
                        }
                        else if(s.top()==asteroids[i]*(-1))
                        {
                            f=1;
                            s.pop();
                            break;
                        }
                        else{
                            s.pop();
                        }
                    }
                }
                if(f==0)
                {
                    s.push(asteroids[i]);
                }
                f=0;
            }
        }
        vector<int>ans;
        while(!s.empty())
        {
            
            ans.insert(ans.begin()+0,s.top());
            s.pop();
        }
        return ans;
    }
};