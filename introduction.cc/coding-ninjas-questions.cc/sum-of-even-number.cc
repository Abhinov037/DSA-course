#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;

    
    cin >> n;

    // Calculate the sum of even numbers using a for loop
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    cout << sum ;

    return 0;
}

   
