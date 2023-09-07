#include <iostream>
using namespace std;
int* search(int arr[][3],int key){
    static int result[2] = {-1, -1};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(key==arr[i][j]){
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
        
    }
    return result;
    
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int* ans= search(arr,2);
    for (int i = 0; i < 2; i++)
    {
        cout<<ans[i]<<" ";
    }
    
}