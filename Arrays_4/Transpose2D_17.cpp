#include <iostream>
using namespace std;
void transpose(int arr[][3],int ans[][3]){
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            swap(arr[i][j],ans[j][i]);
        }
        
    }
    
    
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    cout<<endl;
    int ans[3][3];
   transpose(arr,ans);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout<<endl;
        
    }
    
}