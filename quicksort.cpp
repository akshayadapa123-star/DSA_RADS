#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int partition(vector<int>& arr, int low, int high) {
        int i = low;
        int j = high;
        int pivot = arr[low];

        while (i < j) {

            while (arr[i] <= pivot && i < high)
                i++;

            while (arr[j] > pivot)
                j--;

            if (i < j)
                swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);

        return j;
    }

    void divide(vector<int>& arr, int low, int high) {
        if (low < high) {

            int pindex = partition(arr, low, high);

            divide(arr, low, pindex - 1);
            divide(arr, pindex + 1, high);
        }
    }

    vector<int> quickSort(vector<int>& arr) {
        divide(arr, 0, arr.size() - 1);
        return arr;
    }
};

int main() {

    vector<int> arr = {5, 2, 8, 1, 3};

    Solution s;

    s.quickSort(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}