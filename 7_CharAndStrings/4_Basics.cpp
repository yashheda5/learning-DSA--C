#include <bits/stdc++.h>
using namespace std;
int getlength(char name[]){
    int len=0;
    int i=0;
    while(name[i] != '\0'){
        len++;
        i++;
    }
    return len;
}
int main(){
    char name[100];
    cout<<"Enter name "<<endl;
    cin.getline(name, 100);
    cout<<"length is = "<<getlength(name)<<endl;
    cout<<strlen(name)<<endl;

}