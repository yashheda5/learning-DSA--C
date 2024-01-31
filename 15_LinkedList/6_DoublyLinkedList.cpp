#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data = 0;
        this->prev =NULL;
        this->next =NULL;
    }
    Node(int data){
        this->data = data;
        this->prev =NULL;
        this->next =NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
}
int getLength(Node* head){
    int len =0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=fifth;
    fifth->prev=third;
    print(first);
}