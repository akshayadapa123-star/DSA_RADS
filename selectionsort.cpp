#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            swap(arr[i], arr[minIndex]);
        }

        return arr;
    }
};

int main() {
    Solution s;

    vector<int> arr = {5, 2, 4, 6, 1, 3};

    vector<int> result = s.selectionSort(arr);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}