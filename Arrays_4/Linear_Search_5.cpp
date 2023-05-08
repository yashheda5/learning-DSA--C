#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=55;
    int c=0;
    for (int i = 0; i < 9; i++)
    {
        if(a[i]==n){
            c=1;
            cout<<"Element found"<<endl;
            break;
        }
    }
    if(c==0){
        cout<<"element not found";
    }
    
}