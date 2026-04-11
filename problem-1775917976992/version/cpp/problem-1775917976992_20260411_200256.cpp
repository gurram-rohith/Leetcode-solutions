// Last updated: 4/11/2026, 8:02:56 PM
1class Solution {
2public:
3    string trafficSignal(int timer) {
4        if(timer==0) return "Green";
5        if(timer==30) return "Orange";
6        if(timer>30&&timer<=90) return "Red";
7        return "Invalid";
8    }
9};