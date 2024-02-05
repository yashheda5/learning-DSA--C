#include <bits/stdc++.h>
using namespace std;
void insertedSort(stack<int> &s, int target) {
  if (s.empty()) {
    s.push(target);
    return;
  }
  if (s.top() >= target) {
    s.push(target);
    return;
  }
  int topElement = s.top();
  s.pop();
  insertedSort(s, target);
  s.push(topElement);
}
void sortStack(stack<int> &s) {
  if (s.empty()) {
    return;
  }
  int topElement = s.top();
  s.pop();
  sortStack(s);
  insertedSort(s, topElement);
}
int main() {
  stack<int> st;
  st.push(8);
  st.push(14);
  st.push(2);
  st.push(21);
  st.push(0);
  sortStack(st);
  cout << st.top();
}