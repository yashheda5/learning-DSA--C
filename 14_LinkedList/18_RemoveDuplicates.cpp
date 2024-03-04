#include <iostream>
using namespace std;
class Node{
    public:
    Node* next ;
    int data;
    Node(int data){
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
void removeDuplicates(Node* head){
    if(head == NULL){
        return ;
    }
    Node* current =head;
    Node* forward=NULL;
    while(current != NULL && current->next != NULL){
         forward=current->next;
        if( current->data == forward->data ){
            current->next=forward->next;
            delete forward;
        }else{
            current=forward;
        }
    }
    return;
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    print(head);
    removeDuplicates(head);
    print(head);
    return 0;
}
