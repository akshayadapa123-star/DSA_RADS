#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void helper(vector<int>& arr, int n) {
        if(n <= 1)
            return;

        helper(arr, n - 1);

        int key = arr[n - 1];
        int j = n - 2;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    vector<int> insertionSort(vector<int>& arr) {
        helper(arr, arr.size());
        return arr;
    }
};

int main() {
    vector<int> arr = {5, 3, 4, 1, 2};

    Solution s;
    s.insertionSort(arr);

    for(int x : arr)
        cout << x << " ";

    return 0;
}