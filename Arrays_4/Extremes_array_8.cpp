#include <iostream>
using namespace std;
int main(){
    int n[]={1,2,3,4,5,6,7,8};
   int a=8;
   int s=0;
   int e=7;
    for (int i = 0; i < a ; i++)
    {
        if(s<=e){
            if (s==e)
            {
                cout<<s<<" ";
                break;
            }
            
            cout<<s<<" "<<e<<" ";
            s++;
            e--;
        }
        
    }
    
}