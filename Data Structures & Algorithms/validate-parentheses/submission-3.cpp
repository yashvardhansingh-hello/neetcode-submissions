class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2 == 1) return false;
        stack<char> check;
        // unordered_map<char, char> mpp;
        // mpp[')'] 
        for (char c: s) {
            if(c == '(' || c == '[' ||c == '{') {
                check.push(c);
            } else {
                switch (c){
                    case ')':
                        if(!check.empty() && check.top()=='(') {
                            check.pop();    
                        } else return false;
                        break;
                    case ']':
                        if(!check.empty() && check.top()=='[') {
                            check.pop();    
                        } else return false;
                        break;
                    case '}':
                        if(!check.empty() && check.top()=='{') {
                            check.pop();    
                        } else return false;
                        break;
                    default:
                        return false;
                }
            }
        }
        if(check.empty()) return true;
        return false;
    }
};
