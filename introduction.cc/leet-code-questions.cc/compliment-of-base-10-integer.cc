/*he complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

    For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

Given an integer n, return its complemen                  101 ka ulta hae and agr iske sath and karde than ans */

#include <iostream>

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        // Edge case: handle n == 0 separately
        if (n == 0)
            return 1;

        while (m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1; // Fix: update m instead of n
        }

        int ans = (~n) & mask; // Fix: remove the negative sign before n
        return ans;
    }
};

int main() {
    // Example usage:
    int n = 5;

    // Create an instance of the Solution class
    Solution solution;

    // Call the bitwiseComplement method and store the result
    int complement = solution.bitwiseComplement(n);

    // Print the result
    std::cout << "Bitwise complement of " << n << ": " << complement << std::endl;

    return 0;
}
