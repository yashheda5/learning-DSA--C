#include <iostream>
using namespace std;
int main(){
     cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    int c=0;
    while(n>0){
        if(n&1==1){
            c++;
        }
        n=n>>1;
    }
    cout << c << endl;
}