#include <iostream>
using namespace std;
int main(){
    int a[5][4]={{1,2,3,4},{2,3,4,1},{5,6,1,3},{2,4,6,8},{1,9,9,6}};
    for (int  i = 0; i < 5; i++)
    {
        
        for (int  j = 0; j < 4; j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    for (int  i = 0; i < 4; i++)
    {
        int sum=0;
        for (int  j = 0; j < 5; j++)
        {
            sum=sum+a[j][i];
        }
        cout<<sum<<" ";
        
    }
    
}