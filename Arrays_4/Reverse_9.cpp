#include <iostream>
using namespace std;
int main(){
     int n[]={1,2,3,4,5,6,7};
     int size =7;
     int s=0;
     int e=6;
     for (int i = 0; i < size; i++)
     {
        if(s<=e){
            if(s==e){
                break;
            }
            swap(n[s],n[e]);
            s++;
            e--;
        }
     }
     for (int j = 0; j < size; j++)
     {
        cout<<n[j]<<" ";
     }
     
     
}