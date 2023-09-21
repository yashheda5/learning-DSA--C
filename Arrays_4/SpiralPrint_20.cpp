#include <iostream>
#include <vector>
using namespace std;
void spiral(vector<vector<int>>arr){
    int rs=0 , cs=0,re=arr.size()-1,ce=arr[0].size()-1;
    while(cs<=ce && rs<=re){
        for(int i=cs;i<=ce;i++){
            cout<<arr[rs][i]<<" ";
        }
        rs++;
        for (int i = rs; i <=re; i++)
        {
             cout<<arr[i][ce]<<" ";
        }
        ce--;
        if(rs<=re){
            for (int i = ce; i >= cs; i--)
        {
            cout<<arr[re][i]<<" ";
        } 
        re--;
        }
        if(cs<=ce){
            for(int i=re;i>=rs;i--){
                cout<<arr[i][cs]<<" ";
            }
            cs++;
        }
    }
}
int main(){
    vector<vector<int>>arr{
       {1,    2,   3,   4},
              {5,    6,   7,   8},
             {9,   10,  11,  12},
            {13,  14,  15,  16 }
    };
    spiral(arr);
}