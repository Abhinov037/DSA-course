#include <iostream>
using namespace std;
int main()
{
    float num1, num2, result;
    char oper; //to store operator choice

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Choose operation to perform (+,-,*,/): " << endl;
    cin >> oper;

    switch (oper){
    case '+':
        result = num1 + num2;
        cout << "Result: " << num1 << " " << oper << " " << num2 << " = " << result;
        break;

    case '-':
        result = num1 - num2;
        cout << "Result: " << num1 << " " << oper << " " << num2 << " = " << result;
        break;

    case '*':
        result = num1 * num2;
        cout << "Result: " << num1 << " " << oper << " " << num2 << " = " << result;
        break;

    case '/':
        result = num1 / num2;
        cout << "Result: " << num1 << " " << oper << " " << num2 << " = " << result;
        break;

    default:
        cout << "Invalid operation.";
    }

    return 0;
}
