
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zeroPosition = 0;

        for (int current = 0; current < n; current++) {
            if (nums[current] != 0) {
                swap(nums[current], nums[zeroPosition]);
                zeroPosition++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution solution;
    solution.moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
