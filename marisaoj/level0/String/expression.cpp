// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

ll evaluateExpression(const string& expr) {
    ll result = 0, term = 0, currentNumber = 0;
    char operation = '+';
    
    for (int i = 0; i < expr.size(); ++i) {
        char ch = expr[i];
        
        if (isdigit(ch)) {
            currentNumber = currentNumber * 10 + (ch - '0');
        }
        if (!isdigit(ch) || i == expr.size() - 1) {
            if (operation == '+') {
                result += term;
                term = currentNumber;
            } else if (operation == '-') {
                result += term;
                term = -currentNumber;
            } else if (operation == '*') {
                term *= currentNumber;
            }
            operation = ch;
            currentNumber = 0;
        }
    }
    result += term;
    return result;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string expression;
    cin >> expression;
    cout << evaluateExpression(expression) << endl;
    
    return 0;
}