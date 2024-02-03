#include <iostream>
using namespace std;

int main() {
    int n, sum_even = 0, sum_odd = 0;
    cin >> n;

    while (n > 0) {
        int digit = n % 10;

        if (digit % 2 == 0) {
            sum_even += digit;
        } else {
            sum_odd += digit;
        }

        n /= 10; // Remove the last digit
    }

    cout << sum_even << " " << sum_odd << endl;

    return 0;
}

 
   
    
