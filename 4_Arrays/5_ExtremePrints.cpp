#include <iostream>
using namespace std;
int main(){
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the value for a" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s=0,e=n-1;
    while(s<e){
        if(s==e){
            cout<< a[s++]<<" ";
            e--;
        } else{
            cout<<a[s++]<<" "<<a[e--]<<" ";
        }
        
    }
}