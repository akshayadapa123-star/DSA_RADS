#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void reverseRange(vector<int>& nums, int left, int right) {
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        if (k == 0) {
            return;
        }

        // Reverse first k elements
        reverseRange(nums, 0, k - 1);

        // Reverse remaining elements
        reverseRange(nums, k, n - 1);

        // Reverse the whole array
        reverseRange(nums, 0, n - 1);
    }
};

int main() {
    Solution solution;

    vector<int> nums = {3, 4, 1, 5, 3, -5};
    int k = 8;

    solution.rotateArray(nums, k);

    cout << "Rotated array: ";

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}