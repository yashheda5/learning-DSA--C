#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={1,8,3,0};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    int* p=arr;
    cout<<p<<endl;
    cout<<endl;
    cout<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int brr[10];
    int* c=brr;
    cout<<sizeof(brr)<<endl;
    cout<<sizeof(c)<<endl;
}