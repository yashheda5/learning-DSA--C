#include <bits/stdc++.h>
using namespace std;
void merge(queue <int>& q1, queue <int>& q2){
    int i=q1.size();
    while(i>0){
        int temp=q1.front();
        q1.pop();
        q1.push(temp);
        i--;
        int temp2=q2.front();
        q2.pop();
        q1.push(temp2);
    }
}
int main(){
queue<int>q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
queue<int>q2;
    q2.push(6);
    q2.push(7);
    q2.push(8);
    q2.push(9);
    q2.push(10);
    merge(q1, q2);
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
}
