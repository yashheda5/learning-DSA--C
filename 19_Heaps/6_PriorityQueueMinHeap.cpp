#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(3);
    pq.push(9);
    pq.push(7);
    pq.push(4);
    pq.push(13);
    pq.push(1);
    cout << "top element " << pq.top() << endl;
    pq.pop();
    cout << "top element " << pq.top() << endl;
    cout<<pq.size()<<endl;
    cout << pq.empty() << endl;
    return 0;
}