// Last updated: 4/5/2026, 12:13:09 AM
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0,remundrinked;
        ans+=numBottles;
        int drinking=0;
        while(numBottles>=numExchange){
            drinking=numBottles/numExchange;
            ans+=drinking;
            remundrinked=numBottles%numExchange;
            numBottles=drinking+remundrinked;
        }
        return ans;
        
    }
};