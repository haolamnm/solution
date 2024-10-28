#include <iostream>

using namespace std;

int main () {
    int num1, num2;
    double res;
    char op;

    cout << "Operand1: ";
    cin >> num1;
    cout << "Operand2: ";
    cin >> num2;
    cout << "Operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Can't divide by 0";
            return 1;
        }
        res = (float) num1 / num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '%':
        if (num1 > 0 && num2 > 0) {
            res = num1 % num2;
            break;
        }
    default:
        break;
    }
    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << res;

    return 0;
}