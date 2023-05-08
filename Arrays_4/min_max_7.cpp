#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int a[]= {1,67,23,45,2,5,7,89,645,12,47,1323};
    int max= INT_MIN;
    int min=INT_MAX;
    for (int i = 0; i <12; i++)
    {
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<< "max number is = "<<max<<endl;
    cout<<"min numbe is = "<<min<<endl;
    
}