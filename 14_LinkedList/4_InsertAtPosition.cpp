#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data= 0;
        this->next= NULL;
    }
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
};
void insertAtHead(Node* &head,Node* &tail,int data){
    Node* newNode =new Node(data);
    newNode ->next = head;
    if(head==NULL){
        tail = newNode;
    }
    head=newNode;
}
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode =new Node(data);
    if(tail==NULL){
        tail=newNode;
        head = newNode;
    }else{
        tail->next=newNode;
        tail=newNode;
    }
}
int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp !=NULL){
        temp= temp->next;
        len++;
    }
    return len;
}
void print(Node* head){
    Node* temp=head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void insertAtPosition(int data,int position, Node* &head, Node* &tail ){
    if (position == 0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=findLength(head);
    if(position>len){
        insertAtTail(head,tail,data);
        return;
    }
    if(head==NULL){
        Node* newNode =new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    int i=1;
    Node*prev = head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev-> next;
    Node* newNode = new Node(data);
    newNode->next=curr;
    prev->next=newNode;
}
int main(){
     Node* tail = NULL;
    Node* head = NULL;

    insertAtHead(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtHead(head, tail, 80);

    print(head);
    cout<<endl;
    insertAtPosition(101,3, head,tail);
    print(head);
    

    return 0;
}