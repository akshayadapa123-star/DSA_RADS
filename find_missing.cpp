#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Returns the missing element.
    int missingNumber(vector<int>& nums) {
        long long n = nums.size();

        // A wide type protects the multiplication and accumulated sum.
        long long expectedSum = n * (n + 1) / 2;
        long long actualSum = 0;

        // Combine all present values so their contribution can be removed.
        for (int value : nums) {
            actualSum += value;
        }

        return expectedSum - actualSum;
    }
};

// Driver code
int main() {
    vector<int> nums = {3, 0, 1};

    // instance for class Solution
    Solution sol;

    cout << sol.missingNumber(nums) << '\n';
    return 0;
}