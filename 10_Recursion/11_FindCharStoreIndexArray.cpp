#include <bits/stdc++.h>
using namespace std;
void find(string str, char ch, int i,vector<int>& arr){
    if(str.length()==i){
        return;
    }
    if(ch==str[i]){
        arr.push_back(i);
    }
    return find(str,ch, ++i,arr);
}
int main(){
    string str="yash heda";
    char ch='a';
    vector<int>arr;
    find(str,ch,0,arr);
    for(auto val :arr){
        cout<<val<<" ";
    }
}