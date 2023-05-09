#include <iostream>
using namespace std;
 int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<a[2][2]<<endl;
    cout<<"Enter 9 elements"<<endl;
    int b[3][3];
    for (int  i = 0; i < 3; i++)
    {
      for (int  j = 0; j < 3; j++)
      {
         cin>>b[i][j];
      }
      
    }
    
    for (int  i = 0; i < 3; i++)
    {
      for (int  j = 0; j < 3; j++)
      {
         cout<<b[i][j]<<" ";
      }
      cout<<endl;
      
    }
    
 }