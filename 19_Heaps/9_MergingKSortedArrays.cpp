#include <bits/stdc++.h>
using namespace std;

class Info {
public:
    int value;
    int row;
    int col;

    Info(int val, int r, int c) {
        value = val;
        row = r;
        col = c;
    }
};

class compare {
public:
    bool operator()(Info* a, Info* b) {
        return a->value > b->value;
    }
};

vector<int> mergeKSortedArrays(int arr[][4], int k, int n) {
    priority_queue<Info*, vector<Info*>, compare> minHeap;

    for (int i = 0; i < k; i++) {
        Info* temp = new Info(arr[i][0], i, 0);
        minHeap.push(temp);
    }

    vector<int> ans;

    while (!minHeap.empty()) {
        Info* temp = minHeap.top();
        minHeap.pop();

        int topElement = temp->value;
        int topRow = temp->row;
        int topCol = temp->col;

        ans.push_back(topElement);

        if (topCol + 1 < n) { // Check if there's next element in the row
            Info* nextElement = new Info(arr[topRow][topCol + 1], topRow, topCol + 1);
            minHeap.push(nextElement);
        }
    }

    return ans;
}

int main() {
    int arr[][4] = {{2, 3, 4, 6}, {1, 3, 5, 7}, {0, 9, 10, 11}};
    int k = 3;
    int n = 4;

    vector<int> result = mergeKSortedArrays(arr, k, n);

    cout << "Merged Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
