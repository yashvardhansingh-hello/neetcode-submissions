class MinStack {
public:
    stack<int> stk;
    stack<int> minStk;
    MinStack() {
    }
    
    void push(int val) {
        stk.push(val);
        if(stk.size()==1) {
            minStk.push(val);
        } else {
            int min = minStk.top();
            if (val < min) min = val;
            minStk.push(min);
        }
    }
    
    void pop() {
        stk.pop();
        minStk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};
