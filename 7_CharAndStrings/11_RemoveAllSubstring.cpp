#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="daabcbaabcbc";
    string part="abc";
    int pos=str.find(part);
    while(pos!=string::npos){
        str.erase(pos,part.length());
        pos=str.find(part);
    }
    cout<<str<<endl;
}