#include <bits/stdc++.h>
using namespace std;
int main() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  cout << "Size of Queue is = " << q.size() << endl;
  q.pop();
  cout << "Size of Queue is = " << q.size() << endl;
  if(q.empty()){
    cout << "Queue is empty" << endl;
  } else{
    cout << "Queue is not empty" << endl;
  }
  cout << "Front element is = " << q.front() << endl;
}