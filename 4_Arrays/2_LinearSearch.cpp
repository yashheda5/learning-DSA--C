#include <iostream>
using namespace std;
bool LinearSearch(int a[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==k){
            return true;
        }
    }
    return false;
    
}
int main(){
     cout << "Enter the value for n" << endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the value for a" << endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key value" << endl;
    int k = 0;
    cin>>k;
    if(LinearSearch(a,n,k)){
        cout<<"Element found in array"<<endl;
    } else{
        cout<<"Element not found in array"<<endl;
    }
    
}