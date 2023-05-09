#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int a[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int max=INT_MIN;
    int min= INT_MAX;
    for (int  i = 0; i < 5; i++)
    {
        
        for (int  j = 0; j < 4; j++)
        {
           if(a[i][j]>max){
            max=a[i][j];
           }
           if(a[i][j]<min){
            min=a[i][j];
           }
        }
        
        
    }
    cout<<"max is = "<<max<<endl;
    cout<<"min is = "<<min<<endl;
}