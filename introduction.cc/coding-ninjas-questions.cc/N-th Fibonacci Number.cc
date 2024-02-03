/* Problem statement

You are given an integer ‘N’, your task is to find and return the N’th Fibonacci number using matrix exponentiation.

Since the answer can be very large, return the answer modulo 10^9 +7.
Fibonacci number is calculated using the following formula:

F(n) = F(n-1) + F(n-2),
Where, F(1) = F(2) = 1.

For Example:

For ‘N’ = 5, the output will be 5*/
#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid input. Please enter a non-negative integer.";
    }
    else
    {
        cout << "The " << n << "-th Fibonacci number is: " << fibonacci(n);
    }

    return 0;
}
