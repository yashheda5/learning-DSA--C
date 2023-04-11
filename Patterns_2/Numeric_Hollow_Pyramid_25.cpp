#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n "<<endl;
    cin>>n;
    int a=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            if(i==n-1){
                
                cout<<a++;
                k++;
            }
            if(k==0){
                cout<<k+1;
            }else if(k==2*i){
                cout<<i+1;
            }else{
                cout<<" ";
            }
            
        }
        
        cout<<endl;
    }
    
}