#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if it is possible to place 'k' cows with minimum distance 'mid' between them
bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    int cowCount = 1;          // Initialize the count of cows placed
    int lastPos = stalls[0];   // Initialize the position of the last placed cow

    for(int i = 0; i < n; i++) {
        if(stalls[i] - lastPos >= mid) {  // If the distance between current stall and last placed cow is greater than or equal to 'mid'
            cowCount++;                   // Increment the count of placed cows
            if(cowCount == k) {           // If we have placed 'k' cows, return true
                return true;
            }
            lastPos = stalls[i];          // Update the position of the last placed cow
        }
    }
    return false;  // If it is not possible to place 'k' cows with minimum distance 'mid', return false
}

// Function to find the maximum minimum distance for placing 'k' cows
int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());  // Sort the stalls in ascending order
    int s = 0;                           // Initialize the start of the search space
    int n = stalls.size();               // Get the number of stalls
    int e = stalls[n - 1];               // Initialize the end of the search space
    int ans = -1;                        // Initialize the answer to store the maximum minimum distance
    int mid = s + (e - s) / 2;           // Initialize the mid-point of the search space

    // Perform binary search to find the maximum minimum distance
    while(s <= e) {
        if(isPossible(stalls, k, mid, n)) {  // If it is possible to place 'k' cows with minimum distance 'mid'
            ans = mid;                        // Update the answer to the current 'mid'
            s = mid + 1;                      // Move to the right half of the search space
        } else {
            e = mid - 1;                      // Move to the left half of the search space
        }
        mid = s + (e - s) / 2;               // Update the mid-point of the search space
    }
    return ans;  // Return the maximum minimum distance
}

int main() {
    // Example usage:
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;

    int result = aggressiveCows(stalls, k);
    cout << "Maximum minimum distance to place " << k << " cows: " << result << endl;

    return 0;
}
