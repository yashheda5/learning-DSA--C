#include <bits/stdc++.h>
using namespace std;
class Queue{
public :
int *arr,size,front,rear;
Queue(int size){
  this->size = size;
  arr=new int[size];
  front = 0;
  rear=0;
}
void push(int data){
  if(rear == size){
    cout<<"queue is full"<<endl;
  }else{
    arr[rear]=data;
    rear++; 
  }
}
void pop(){
  if(front == rear ){
    cout<<"queue is empty"<<endl;
  }else{
      arr[front]=-1;
    front++;
    if(front ==rear){
      front =0;
      rear =0;
    }
  }
}
int getFront(){
  if(front == rear){
    cout<<"q is empty "<<endl;
    return -1;
  }else{
    return arr[front];
  }
}
bool isEmpty(){
  if(front == rear){
    return true;
  }else{
    return false ;
  }
}
int getSize(){
  return rear-front;
}
};
int main(){
  Queue q(5);
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  cout<<q.getSize()<<endl;
  cout<<q.pop();
  cout<<q.isEmpty()<<endl;
}