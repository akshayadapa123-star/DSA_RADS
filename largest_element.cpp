#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int highest = nums[0];

        for(int i = 0; i < n; i++) {
            if(nums[i] > highest) {
                highest = nums[i];
            }
        }

        return highest;
    }
};

int main() {
    Solution s;

    vector<int> nums = {10, 25, 7, 45, 30};

    cout << s.largestElement(nums);

    return 0;
}