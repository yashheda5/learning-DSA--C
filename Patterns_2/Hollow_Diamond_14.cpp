#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the value for n"<<endl;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            if(k==0 || k== 2*i){
                cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<endl; 
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i ; j++)
        {
            cout<<" ";
        }
        for (int k = 2*n-1-2*i; k > 0; k--)
        {
            if(k==1 || k==2*n-1-2*i ){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }
    
    
    
    
}