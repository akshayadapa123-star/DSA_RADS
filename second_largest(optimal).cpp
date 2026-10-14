#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();

        if (n < 2) {
            return -1;
        }

        int largest = nums[0];
        int secondLargest;
        bool hasSecond = false;

        for (int i = 1; i < n; i++) {
            int current = nums[i];

            if (current > largest) {
                secondLargest = largest;
                largest = current;
                hasSecond = true;
            }
            else if (current < largest) {

                if (!hasSecond || current > secondLargest) {
                    secondLargest = current;
                    hasSecond = true;
                }
            }
        }

        if (!hasSecond) {
            return -1;
        }

        return secondLargest;
    }
};

int main() {
    vector<int> nums = {8, 8, 5, 3, 5};

    Solution solution;

    cout << solution.secondLargestElement(nums) << endl;

    return 0;
}