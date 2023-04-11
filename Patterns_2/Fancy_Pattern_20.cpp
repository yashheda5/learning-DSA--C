#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         int a=0;
        for (int j = 0; j < 2*i+1; j++)
        {
           
            if(j==0|| j==2*i){
                cout<<"* ";
            }else if(j<i+1){
                cout<<++a<<" ";
            }else{
                
                cout<<--a<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        int a=0;
        for(int j = n+1-2*i; j >0 ; j--)
        {
            if(j==n+1-2*i || j==1){
                cout<<"* ";
            } else if(j>=(n+1-2*i)/2 +1){
                cout<<++a<<" ";
            } else{
                cout<<--a<<" ";
            }
        }
        cout<<endl;
    }
    
    
}