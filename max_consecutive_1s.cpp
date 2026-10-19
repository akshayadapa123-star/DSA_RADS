#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
                maxi = max(maxi, count);
            }
            else {
                count = 0;
            }
        }

        return maxi;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    Solution obj;
    cout << obj.findMaxConsecutiveOnes(nums);

    return 0;
}