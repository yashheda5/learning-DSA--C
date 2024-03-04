#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->next = NULL;
        this->data = data;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* sort(Node*& head) {
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while (curr != nullptr) {
        if (curr->data == 0) {
            zeroTail->next = curr;
            zeroTail = curr;
        } else if (curr->data == 1) {
            oneTail->next = curr;
            oneTail = curr;
        } else if (curr->data == 2) {
            twoTail->next = curr;
            twoTail = curr;
        }

        Node* temp = curr;
        curr = curr->next;
        temp->next = nullptr;
    }

    // Connect the lists
    zeroTail->next = oneHead->next;
    oneTail->next = twoHead->next;

    // Save the new head after sorting
    Node* sortedHead = zeroHead->next;

    // Clean up temporary nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return sortedHead;
}
 
int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(0);
    Node *fourth = new Node(0);
    Node *fifth = new Node(0);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    print(head);
    head=sort(head);
    print(head);
}
