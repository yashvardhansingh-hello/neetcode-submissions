class Solution {
public:
    int helper(char c, int a, int b) {
        switch (c) {
            case '+':
                return a+b;
            case '-':
                return a-b;
            case '*':
                return a*b;
            case '/':
                return a/b;
            default: 
                return -1;
        }
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        pair<int, int> op;
        for (string s: tokens) {
            if (s.size()==1 && (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/')) {
                op.first = stk.top();
                stk.pop();
                op.second = stk.top();
                stk.pop();
                stk.push(helper(s[0], op.second, op.first));
            } else {
                stk.push(stoi(s));
            }
        }
        return stk.top();
    }
};
