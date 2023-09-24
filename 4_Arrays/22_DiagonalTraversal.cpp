#include <iostream>
#include <vector>
using namespace std;
void DiagonalTraverse(vector<vector<int>> arr){
    int i=0,j=0;
    int c=0;
    bool up=true,down = false;
    while(i<arr.size() && j<arr[0].size() && j<arr[0].size()){
        if(up){
            while(i>=0 && i< arr.size() && j<arr.size()){
                cout<<arr[i][j]<<" ";
                 if(i== arr.size()-1 && j== arr.size()-1){
                    c=1;
                    break;
                 }
                i--;
                j++;
            }
            if(c==1){
                break;
            }
            
            if(i== -1){
                i++;
            }
            if(j==arr[0].size()){
                i++;
                j--;
            }
           
            
            up=false;
            down=true;
            continue;
        }
        if(down){
            while(j>=0 && j<arr[0].size() && i<arr.size()){
                cout<<arr[i][j]<<" ";
                i++;
                j--;
            }
            if(j==-1){
                j++;
            }
            if(i==arr.size()){
                j=j+2;
                i--;
            }
            
            up=true;
            down=false;
        }
    }
}
int main(){
    vector<vector<int>>arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    DiagonalTraverse(arr);
}