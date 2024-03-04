#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
Node* reverseKNodes(Node* &head, int k) {
    if (head == NULL) {
        cout << "Linked list is empty!" << endl;
        return NULL;
    }
    int len = getLength(head);
    if (k > len) {
        cout << "Enter valid value for k" << endl;
        return head;
    }

    Node* prev = NULL;
    Node* cur = head;
    Node* forward =cur->next;
    int count = 0;

    // Reverse the first k nodes
    while (count < k) {
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
        count++;
    }

    // If there are remaining nodes, recursively reverse them
    if (forward != NULL) {
        head->next = reverseKNodes(forward, k);
    }

    return prev;
}


int main()
{
    Node *head = new Node(10);
    Node *second = new Node(12);
    Node *third = new Node(14);
    Node *fourth = new Node(16);
    Node *fifth = new Node(18);
    Node *sixth = new Node(20);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Original linked list: ";
    print(head);

    head = reverseKNodes(head, 3);

    cout << "Reversed linked list: ";
    print(head);

    return 0;
}
