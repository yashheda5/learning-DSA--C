#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n "<<endl;
    cin>>n;
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<"  ";
        }
        for (int  k = i; k <=i*2-1; k++)
        {
            if( i==n || k==i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        for (int l = 2; l <=i ; l++)
        {
            if(l==i || i==n){
                cout<<"* ";
            } else{
                cout<<"  ";
            }
        }
        
        
        cout<<endl;
        
        
    }
    
}