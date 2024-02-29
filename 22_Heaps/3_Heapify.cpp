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
void heapify(int arr[],int size , int i){
    int index =i;
    int leftIndex =2*i;
    int leftIndex =2*i+1;
    if(leftIndex < size && arr[largest]< arr[leftIndex]){
        largest = leftIndex ;
    }
}
 
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
