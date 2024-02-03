/*Write a program to find the factorial of a number.

Factorial of n is:

n! = n * (n-1) * (n-2) * (n-3)....* 1

Output the factorial of 'n'. If it does not exist, output 'Error'.
*/

#include <iostream>
using namespace std;
int main()
{
    int X, i, a = 1;
    cin >> X;
    if (X == 0)
    {
        cout << "1";
    }
    else if (X < 0)
    {
        cout << "Error";
    }
    else
    {
        for (i = X; i > 0; i--)
        {
            a = a * i;
        }
        cout << a;
    }
    return 0;
}