#include <iostream>
using namespace std;
bool prime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
    
}
int main(){
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if(prime(i)){
            cout<<i<<endl;
        }
    }
    
}