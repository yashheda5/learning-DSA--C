#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    int a=1;
    for (int  i = 0; i <n ; i++)
    {
        
        for (int  j = 0; j < 2*i+1; j++)
        {
            if(j%2==1){
                cout<<"* ";
            }else{
                cout<<a++<<" ";
            }
        }
        cout<<endl;
        
    }
     a=a-n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2*n-1-2*i; j >0; j--)
        {
            if(j%2==0){
                cout<<"* ";
            }else{
                cout<<a++<<" ";
            }
            
        }
        a=a/2-1;
        cout<<endl;
        
    }
    
    
    
}