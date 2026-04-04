// Last updated: 4/5/2026, 12:14:48 AM
class MinStack {
public:
    stack<int>s;
    vector<int>minvalue;
    int k;
    MinStack() {
        minvalue = vector<int>(300001, INT_MAX);
        k=0;
    }
    
    void push(int val) {
        if(k==0)
        minvalue[k]=val;
        else
        minvalue[k]=min(minvalue[k-1],val);
        k++;
        s.push(val);
    }
    
    void pop() {
        k--;
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minvalue[k-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */