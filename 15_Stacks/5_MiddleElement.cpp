#include <bits/stdc++.h>
using namespace std;
void middleElement(stack<int>&s,int &totalSize){
    if(s.empty){
        cout<<"No element in stack"<<endl;
        return;
    }
    if(s.size() == totalSize/2+1){
        cout<<"MiddleElement is = "<<s.top()<<endl;
        return;
    } 
    int temp=s.top();
    s.pop();
     middleElement(s,totalSize);
    s.push(temp);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int totalSize = s.size();
    middleElement(s,totalSize);
    cout<<"top of stack is = "<<s.top()<<endl;

}