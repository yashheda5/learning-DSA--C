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
    while(s<=e){
    //    int temp=a[s];
    //    a[s]=a[e];
    //    a[e]=temp; 
    swap(a[s],a[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
}