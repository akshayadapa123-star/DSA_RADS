
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        }

        int uniqueposition = 1;

        for (int current = 1; current < n; current++) {
            if (nums[current] != nums[uniqueposition - 1]) {
                nums[uniqueposition] = nums[current];
                uniqueposition++;
            }
        }

        return uniqueposition;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3};

    Solution solution;
    int k = solution.removeDuplicates(nums);

    cout << "k = " << k << endl;

    for (int index = 0; index < k; index++) {
        cout << nums[index] << " ";
    }

    cout << endl;

    return 0;
}
