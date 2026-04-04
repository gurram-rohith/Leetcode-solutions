// Last updated: 4/5/2026, 12:14:27 AM
class MyQueue {
public:
    stack<int>s,t;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while(s.size()!=1)
        { int value=s.top();
            t.push(value);
            s.pop();
        }
        int value=s.top();
        s.pop();
        while(!t.empty())
        {
            s.push(t.top());
            t.pop();
        }
        return value;
    }
    
    int peek() {
        while(s.size()!=1)
        { int value=s.top();
            t.push(value);
            s.pop();
        }
        int value=s.top();
        while(!t.empty())
        {
            s.push(t.top());
            t.pop();
        }
        return value;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */