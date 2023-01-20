#include <bits/stdc++.h>
using namespace std;

/*
Design a C++ program to convert and print a given valid parenthesized
infix arithmetic expression to postfix expression. The expression
consists of single character operands and binary operators +, -, *, / and
$. Apply the concept of stack data structure to solve this problem.

*/

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    map<char, int> precedence;
    precedence['*'] = 3;
    precedence['/'] = 3;
    precedence['+'] = 2;
    precedence['-'] = 2;

    for (int i = 0; i < infix.length(); i++) {
        if (isalnum(infix[i])) {
            postfix += infix[i];
        } else if (infix[i] == '(') {
            s.push(infix[i]);
        } else if (infix[i] == ')') {
            while (s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && (precedence[s.top()] >= precedence[infix[i]])) {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main() {
    string infix = "((1/2)-5)*(3-4)";
    cout << infixToPostfix(infix) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    map<char, int> precedence;
    precedence['*'] = 3;
    precedence['/'] = 3;
    precedence['+'] = 2;
    precedence['-'] = 2;

    for (int i = 0; i < infix.length(); i++) {
        if (isalnum(infix[i])) {
            postfix += infix[i];
        } else if (infix[i] == '(') {
            s.push(infix[i]);
        } else if (infix[i] == ')') {
            while (s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && (precedence[s.top()] >= precedence[infix[i]])) {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main() {
    string infix = "((1/2)-5)*(3-4)";
    cout << infixToPostfix(infix) << endl;
    return 0;
}
