#include <bits/stdc++.h>
using namespace std;
int main(){
    char word[100];
    cout<<"Enter word"<<endl;
    cin.getline(word,100);
    for (int i = 0; i < strlen(word); i++)
    {
        word[i]=char((int)word[i]-32);
    }
    
    cout<<"The word is "<<word<<endl;
}