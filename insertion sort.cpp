#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& arr) {
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }

        return arr;
    }
};

int main() {
    Solution s;

    vector<int> arr = {5, 2, 4, 6, 1, 3};

    vector<int> result = s.insertionSort(arr);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}