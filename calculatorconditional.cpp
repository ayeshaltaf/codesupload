#include <iostream>
using namespace std;

int main()
{
    double a, b, result;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    result = (op == '+') ? a+b :
             (op == '-') ? a-b :
             (op == '*') ? a*b :
             (op == '/') ? (b != 0 ? a/b : 0) :
             (op == '%') ? ((b != 0) ? (int)a % (int)b : 0) : 0;

    if (op == '/' && b == 0)
        cout << "Division by zero not allowed";
    else if (op == '%' && b == 0)
        cout << "Division by zero not allowed";
    else if (op != '+' && op != '-' && op != '*' &&
             op != '/' && op != '%')
        cout << "Invalid operator";
    else
        cout << "Result = " << result;

    return 0;
}
