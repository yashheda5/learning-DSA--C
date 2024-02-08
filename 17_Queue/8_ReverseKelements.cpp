#include <bits/stdc++.h>
using   namespace std;
void reverseQueue(queue<int>& q,int k){
    stack <int>s;
    int i=0;
    int n=q.size();
    while(!q.empty()){
        int temp=q.front();
        s.push(temp);
        q.pop();
        i++;
        if(i==k){
            break;
        }
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    int count =0;
    while(count<n-k){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
    }

}
int main(){
  queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverseQueue(q,1);
    cout<<"printing queue"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}