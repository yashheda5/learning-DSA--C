#include <bits/stdc++.h>
using namespace std;

int main(){
string str="yash heda";
stack<char>s;
for (int i = 0; i < str.size(); i++)
{
    s.push(str[i]);
}
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}

}