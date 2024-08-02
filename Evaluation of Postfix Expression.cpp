#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    // Function to evaluate a postfix expression.
    int evaluatePostfix(string S) {
        stack<int> ans;

        for (char ch : S) {
            if (isdigit(ch)) {
                ans.push(ch - '0');
            } else {
                int val2 = ans.top(); // First pop is the right operand
                ans.pop();
                int val1 = ans.top(); // Second pop is the left operand
                ans.pop();

                switch (ch) {
                    case '+': ans.push(val1 + val2); break;
                    case '-': ans.push(val1 - val2); break;
                    case '*': ans.push(val1 * val2); break;
                    case '/': ans.push(val1 / val2); break;
                }
            }
        }
        return ans.top();
    }
};
