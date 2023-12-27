#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> left, vector<int> right) {
    vector<int> mix;
    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            mix.push_back(left[i]);
            k++;
            i++;
        } else {
            mix.push_back(right[j]);
            k++;
            j++;
        }
    }
    while (i < left.size()) {
        mix.push_back(left[i]);
        k++;
        i++;
    }
    while (j < right.size()) {
        mix.push_back(right[j]);
        j++;
        k++;
    }
    return mix;
}

vector<int> mergeSort(vector<int> arr) {
    if (arr.size() <= 1) {
        return arr;
    }
    int mid = arr.size() / 2;
    // left part
    vector<int> left(arr.begin(), arr.begin() + mid);
    // right part
    vector<int> right(arr.begin() + mid, arr.end());
    // merge
    return merge(mergeSort(left), mergeSort(right));
}

int main() {
    vector<int> arr{4, 56, 7, 21, 55, 41, 10, 2};
    vector<int> brr = mergeSort(arr);
    for (int i = 0; i < brr.size(); i++) {
        cout << brr[i] << " ";
    }

    return 0;
}
