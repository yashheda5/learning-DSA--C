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
Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* forward = nullptr;

    while (curr != nullptr) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev; // Return the new head of the reversed list
}

bool checkPalindrome(Node* &head){
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
        return true;
    }
    if(head->next == NULL){
        return true;
    }
    Node* slow = head;
    Node* fast =head->next;
    while(fast != NULL){
        fast=fast->next;
        if(fast != NULL){
             fast=fast->next;
             slow=slow->next;
        }
    }
    Node* reverseLinkedListhead=reverse(slow->next);
    slow -> next=reverseLinkedListhead;
    Node* temp1 =head;
    Node* temp2 = reverseLinkedListhead;
    while(temp2 != NULL){
        if(temp1 -> data != temp2->data){
            return false;
        }else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;


}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    cout<<checkPalindrome(head)<<endl;
    return 0;
}