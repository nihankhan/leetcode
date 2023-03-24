class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            }
            else {
                if (stk.empty()) {
                    return false;
                }
                
                char open = stk.top();
                stk.pop();
                
                if((c == ')' && open != '(') || 
                   (c == ']' && open != '[') ||
                   (c == '}' && open != '{')) {
                    return false;
                }
            }
        }
        
        return stk.empty();
        
    }
};
