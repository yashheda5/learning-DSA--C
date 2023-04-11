#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n ; j++)
        {
            if(i==1 || i==n || j==i || j==n ){
                cout<<j<<" ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
        
    }
    
}