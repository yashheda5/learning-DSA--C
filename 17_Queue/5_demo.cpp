#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> q;
    q.push_back(6);
    q.push_back(7);
    q.push_front(1);
    q.push_front(2);
    q.push_front(3);
    q.push_front(4);
    q.push_front(5);
    cout << q.size() << endl;
     q.pop_back() ;
    q.pop_front() ;
    cout << q.size() << endl;
}