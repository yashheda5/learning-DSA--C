#include <iostream>
using namespace std ;
 int main(){
    int a[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int k=11;
    for (int  i = 0; i < 5; i++)
    {
        
        for (int  j = 0; j < 4; j++)
        {
           if(a[i][j]==k){
            cout<<"Element found at = "<<i<<","<<j;
           }
        }
        
        
    }
 }