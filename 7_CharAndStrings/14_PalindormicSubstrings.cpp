#include <bits/stdc++.h>
using namespace std;

int expandArround(string str, int i , int j){
    int count = 0;
    while(i>=0 && j< str.length() && str[i]==str[j]) {
        count++;
        i--;
        j++;
    }
    return count;
}

int main(){
    int count =0;
    string str="yash";
    for (int i = 0; i < str.length(); i++)
    {
        //odd
        int oddAns=expandArround(str,i,i);
        count +=oddAns;
        //even
        int evenAns=expandArround(str,i,i+1);
        count +=evenAns;
    }
    cout<<count;
    
}