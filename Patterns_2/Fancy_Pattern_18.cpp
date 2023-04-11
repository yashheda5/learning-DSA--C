#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+2-i; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < i+1; k++)
        {
            if(k!=0 || k!= i+1){
                cout<<"*";
            }
            cout<<i+1;
            
        }
        for (int l = 0; l < n+3-i; l++)
        {
            cout<<"*";
        }
        
        
        cout<<endl;
    }
    
}