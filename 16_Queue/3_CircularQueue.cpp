#include <iostream>
using namespace std;

class CQueue {
public:
    int size;
    int *arr;
    int front;
    int rear;

    CQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data) {
        if (front == rear + 1 || (front == 0 && rear == size - 1)) {
            cout << "Queue is full!" << endl;
            return;
        } else if (front == -1) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = data;
    }

    void pop() {
        if (front == -1) {
            cout << "Queue is empty, cannot pop" << endl;
        } else if (front == rear) {
            arr[front] = -1;
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
    }
};

int main() {
    // Example usage of Circular Queue
    CQueue cq(5);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);

    cout << "Elements in the queue: ";
    while (cq.front != -1) {
        cout << cq.arr[cq.front] << " ";
        cq.pop();
    }

    cout << endl;

    return 0;
}
