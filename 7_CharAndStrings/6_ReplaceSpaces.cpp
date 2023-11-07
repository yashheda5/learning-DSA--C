#include <bits/stdc++.h>
using namespace std;
int main(){
    char sentence[100];
    cout<<"Enter sentence  "<<endl;
    cin.getline(sentence , 100);
    for (int i = 0; i < strlen(sentence); i++)
    {
        if(sentence[i]== ' '){
            sentence[i]= '@';
        }
    }
    cout<<"The replaced sentence is =  "<<sentence<<endl;
    
}