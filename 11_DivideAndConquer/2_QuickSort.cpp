#include <bits/stdc++.h>
using namespace std;

int midpoint(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int m = low;

    for (int i = low; i < high; i++) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[m]);
            m++;
        }
    }

    swap(arr[m], arr[high]);
    return m;
}

void sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int m = midpoint(arr, low, high);
        sort(arr, low, m - 1);
        sort(arr, m + 1, high);
    }
}

int main() {
    vector<int> arr{40, 70, 20, 80, 90, 50};
    sort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
