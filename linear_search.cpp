#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] == target) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution s;

    vector<int> nums = {10, 20, 30, 40, 50};
    int target = 30;

    cout << s.linearSearch(nums, target);

    return 0;
}