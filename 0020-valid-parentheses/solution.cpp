#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if (s.length() % 2 == 1) return false;
        for (int i = 0; i < s.length(); i ++) {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stk.push(s[i]);
                continue;
            }
            if (stk.empty()) return false;  
            else {
                if (s[i] == ')') {
                    if(stk.top() == '(') {
                        stk.pop();
                        continue;
                    }

                }
                else if (s[i] == ']') {
                    if(stk.top() == '[') {
                        stk.pop();
                        continue;
                    }

                }
                else if (s[i] == '}') {
                    if(stk.top() == '{') {
                        stk.pop();
                        continue;
                    }

                }
                return false;

            }
           
        }
        if (stk.size() != 0) return false;
        return true;

    }
};
