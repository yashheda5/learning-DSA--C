#include <iostream>
using namespace std;
int main(){
     cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    int num=0;
    while(n>0){
        if(n%2==0){
            num=(num*10)+0;
        } else{
            num=(num*10)+1;
        }
        n=n/2;
    }
     cout<<num;
}