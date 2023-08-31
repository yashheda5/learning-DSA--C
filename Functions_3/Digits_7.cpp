#include <iostream>
using namespace std;
void findDigits(int n){
    
    while(n>0){
        int d=n%10;
        cout<<d<<" ";
        n=n/10;
    }
}
int main(){
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    findDigits(n);
}
