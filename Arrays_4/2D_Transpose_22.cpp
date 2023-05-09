#include <iostream>
using namespace std;
void printarray(int a[3][3],int row,int col){
    for (int  i = 0; i < row  ; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int main(){
    int a[3][3]={{1,2,3} ,{4,5,6},{7,8,9}};
    int b[3][3];
    printarray(a,3,3);
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            b[i][j]=a[j][i];
        }
        
    }
    cout<<endl;
    printarray(b,3,3);

}