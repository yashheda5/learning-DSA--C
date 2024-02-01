#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 0) // corrected condition
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack is overflow! " << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow, can't delete element " << endl;
            return;
        }
        top--;
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        if (top == -1)
        {
            return 0;
        }
        else
        {
            return top + 1;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Element on top of stack: " << s.getTop() << endl;
    cout << "Size of stack is: " << s.getSize() << endl;

    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;

    cout << "Size of stack after popping all elements: " << s.getSize() << endl;
    s.pop();
    return 0;
}
