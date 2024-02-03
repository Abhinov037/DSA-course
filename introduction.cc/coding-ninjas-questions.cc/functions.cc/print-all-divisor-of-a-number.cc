/* Problem statement

Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.


For example:

'N' = 5.
The divisors of 5 are 1, 5.

*/
#include<iostream>
using namespace std;

// Function to print divisors of a number
void printDivisors(int n) {
    cout << "Divisors of " << n << ": ";
    
    for (int d = 1; d <= n; ++d) {
        if (n % d == 0) {
            cout << d << " ";
        }
    }

    cout << endl;
}

int main() {
    int n;

    // Take input
    cout << "Enter a number: ";
    cin >> n;

    // Call the function to print divisors
    printDivisors(n);

    return 0;
}

