#include <bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int>& q){
    stack<int>s;
    while(!q.empty()){
        int element =q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverseQueue(q);
    cout<<"printing queue"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}