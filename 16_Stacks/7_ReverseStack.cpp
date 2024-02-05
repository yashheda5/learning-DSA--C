#include <bits/stdc++.h>
using namespace std;
void insertAtbottom(stack<int> &s,int target){
  if(s.empty()){
    s.push(target);
    return;
  }
  int temp =s.top();
  s.pop();
  insertAtbottom(s,target);
  s.push(temp);
}
void reverse(stack<int> &s){
  if(s.empty()){
    return;
  }
  int target=s.top();
  s.pop();
  reverse(s);
  insertAtbottom(s,target);
}

int main(){
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  reverse(s);
  while(!  s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
}