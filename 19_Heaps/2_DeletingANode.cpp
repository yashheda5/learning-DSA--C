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
    void deleteMax(){ // Changed the name of the function to 'deleteMax' to avoid conflict with 'delete' keyword
        arr[1] = arr[size];
        size--;
        int index = 1; // Initialized 'index' variable here
        while(index * 2 <= size ){ // Changed 'index < size' to 'index * 2 <= size' to properly check children's indices
            int leftChild = index * 2;
            int rightChild = index * 2 + 1;
            int maxIndex = index; // Added 'maxIndex' variable to keep track of the maximum value index
            if(leftChild <= size && arr[index] < arr[leftChild]){
                maxIndex = leftChild; // Updated 'maxIndex' if left child is greater
            }
            if(rightChild <= size && arr[maxIndex] < arr[rightChild]){
                maxIndex = rightChild; // Updated 'maxIndex' if right child is greater
            }
            if(maxIndex != index){ // If the maximum value index has changed, swap and update 'index'
                swap(arr[index], arr[maxIndex]);
                index = maxIndex;
            } else {
                break;
            }
        }
    }
   
};
 
int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size = 5;
    cout<<"printing the heap"<<endl;
    for (int i = 1; i <= h.size ; i++) // Changed the loop starting index to 1
    {
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;
    h.insert(110);
    cout<<"printing the heap after insertion"<<endl;
    for (int i = 1; i <= h.size ; i++) // Changed the loop starting index to 1
    {
        cout<<h.arr[i]<<" ";
    }
    h.deleteMax(); // Corrected the function call to 'deleteMax'
    cout<<endl;
    cout<<"printing the heap after deletion"<<endl;
    for (int i = 1; i <= h.size ; i++) // Changed the loop starting index to 1
    {
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;
} 
