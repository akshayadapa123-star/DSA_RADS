#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;

        int i = low;
        int j = mid + 1;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        while (j <= high) {
            temp.push_back(arr[j]);
            j++;
        }

        for (int k = low; k <= high; k++) {
            arr[k] = temp[k - low];
        }
    }

    void sort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;

            sort(arr, low, mid);
            sort(arr, mid + 1, high);

            merge(arr, low, mid, high);
        }
    }

    vector<int> mergeSort(vector<int>& arr) {
        sort(arr, 0, arr.size() - 1);
        return arr;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution s;
    vector<int> result = s.mergeSort(arr);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}