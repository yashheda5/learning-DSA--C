#include <iostream>
#include <climits>
using namespace std;
int* search(int arr[][3]){
    static int result[2] = {INT_MAX,INT_MIN };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j]<result[0]){
                result[0]=arr[i][j];
            }
            if(arr[i][j]>result[1]){
                result[1]=arr[i][j];
            }
        }
        
    }
    return result;
    
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int* ans= search(arr);
    for (int i = 0; i < 2; i++)
    {
        cout<<ans[i]<<" ";
    }

}