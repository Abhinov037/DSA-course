/* Problem statement

Write a program to count the number of 1's in the binary representation of an integer.
*/
#include <iostream>

using namespace std;

int countBits(int n) {
    int count = 0;
    int b = sizeof(n) * 8;

    for (int i = b; i > 0; i--) {
        int digit = (n >> (i - 1)) & 1;  // Extract individual bits using right shift and bitwise AND
        if (digit == 1) {
            count++;
            cout << digit;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    cout << "\nNumber of set bits: " << countBits(n) << endl;

    return 0;
}
