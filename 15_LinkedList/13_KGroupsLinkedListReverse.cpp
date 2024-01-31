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
Node reverseKNodes(Node* head){
    if(head == NULL){
        cout<<"Linked list is empty!";
        return NULL;
    }
    int len =
    if()
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
    fourth->next = fifth;\
    fifth->next = sixth;
    print(head);
    
    return 0;
}