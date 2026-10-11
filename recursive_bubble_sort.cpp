#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void helper(vector<int>& arr, int n, int i) {
        if(n <= 1)
            return;

        if(i == n - 1) {
            helper(arr, n - 1, 0);
            return;
        }

        if(arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);

        helper(arr, n, i + 1);
    }

    vector<int> bubbleSort(vector<int>& arr) {
        helper(arr, arr.size(), 0);
        return arr;
    }
};

int main() {
    vector<int> arr = {5, 3, 4, 1, 2};

    Solution s;
    s.bubbleSort(arr);

    for(int x : arr)
        cout << x << " ";

    return 0;
}