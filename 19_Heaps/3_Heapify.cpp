#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    int arr[101];
    int size;
    Heap()
    {
        size = 0;
    }
    void insert(int value){
        size = size + 1;
        int index = size;
        arr[index] = value;
        while(index > 1){
            int parentIndex = index / 2;
            if(arr[index] > arr[parentIndex]){
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            } else {
                 break;
            }
        }
    }
};

void heapify(int arr[], int size, int i){
    int index = i;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;
    int largest = i; // Initialize 'largest' with the current index
    if(leftIndex <= size && arr[largest] < arr[leftIndex]){
        largest = leftIndex;
    }
    if(rightIndex <= size && arr[largest] < arr[rightIndex]){
        largest = rightIndex;
    }
    if(index != largest){
        swap(arr[index], arr[largest]);
        heapify(arr, size, largest); // Recursive call to heapify the swapped index
    }
}

void BuildHeap(int arr[], int size){
    for (int i = size / 2; i >= 1; i--){ // Changed the loop condition
        heapify(arr, size, i);
    }
}

int main()
{
    int arr[] = {-1, 12, 15, 13, 11, 14};
    int n = 5;
    BuildHeap(arr, n);
    cout << "printing the heap..." << endl;
    for (int i = 1; i <= n; i++) // Start the loop from index 1
    {
        cout << arr[i] << " ";
    }
    cout << endl;
} 
 