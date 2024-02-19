/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                // Return indices of the two numbers
                return {numMap[complement], i};
            }

            // Add the current number and its index to the map
            numMap[nums[i]] = i;
        }

        // If no solution is found
        return {};
    }
};

int main() {
    // Example usage:
    std::vector<int> nums = {3, 2, 3};
    int target = 6;

    // Create an instance of the Solution class
    Solution solution;

    // Call the twoSum method and store the result
    std::vector<int> result = solution.twoSum(nums, target);

    // Print the result
    if (!result.empty()) {
        std::cout << "Indices of the two numbers: " << result[0] << " and " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}


 