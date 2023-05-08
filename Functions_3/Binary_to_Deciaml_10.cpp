#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout<<"Enter number in binary"<<endl;
    int n;
    cin>>n;
    int i=0,sum=0;
    while(n>0){
        int d=n%10;
        n=n/10;
        sum=sum+d*pow(2,i++);
    }
    cout<<sum;
}