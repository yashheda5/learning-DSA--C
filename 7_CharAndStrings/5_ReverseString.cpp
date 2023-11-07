#include <bits/stdc++.h>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter name "<<endl;
    cin.getline(name, 100);
    for (int i = 0; i < strlen(name)/2 ; i++)
    {
        swap(name[i],name[strlen(name)-1-i]);
    }
    cout<<"Reverse name is "<<name <<endl;
    
}