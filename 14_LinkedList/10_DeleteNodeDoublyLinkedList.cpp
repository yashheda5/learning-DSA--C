#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
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
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void insertAtPostion(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else
    {
        if (position == 1)
        {
            insertAtHead(head, tail, data);
            return;
        }
        int len = getLength(head);
        if (position > len)
        {
            insertAtTail(head, tail, data);
            return;
        }
        int i=1;
        Node* prevNode = head;
        while(i<position -1){
            prevNode = prevNode->next;
            i++;
        }
        Node* curr=prevNode->next;
         Node *newNode = new Node(data);
         prevNode->next = newNode;
         newNode->prev=prevNode;
         curr ->prev =newNode;
         newNode->next = curr;

    }
}
void DeleteNode(Node* &head, Node* &tail,int position){
    if(head==NULL){
        cout<<"The linked list is empty!"<<endl;
        return;
    }
    int len=getLength(head);
    if(position > len){
        cout<<"Please enter a valid position"<<endl;
    }
    if(head->next == NULL){
        Node* temp= head;
        head=NULL;
        tail=NULL;
        delete temp;
         return;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head ->prev = NULL;
        delete temp;
        return ;
    }
   
    if(position == len){
        Node* temp =tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
           delete temp;
        return ;
    }
    int i=1;
    Node* left=head;
    while(i<position-1){
        left = left->next;
        i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;
    right->prev = left;
    left->next = right;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
    return;

}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = third;
    Node *head = first;
    Node *tail = fifth;
    print(first);
    cout << endl;
    insertAtHead(head, tail, 101);
    print(head);
    cout << endl;
    insertAtTail(head, tail, 101);
    print(head);
    cout << endl;
    insertAtPostion(head, tail, 401,3);
      print(head);
      cout << endl;
      cout << "deleting"<<endl;
      DeleteNode(head,tail,1);
      print(head);
      return 0;
}
