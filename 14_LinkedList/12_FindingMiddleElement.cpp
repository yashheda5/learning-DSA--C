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
Node* getMiddle(Node* head){
    if(head == NULL){
        cout<<"Linked List is empty!"<<endl;
        return head;
    }
    if(head-> next == NULL){
     return head;   
    }
    Node* slow =head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(12);
    Node *third = new Node(14);
    Node *fourth = new Node(16);
    Node *fifth = new Node(18);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(head);
    cout<<getMiddle(head)->data<<endl;
    return 0;
}