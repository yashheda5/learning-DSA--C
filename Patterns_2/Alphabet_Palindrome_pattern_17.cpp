#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        int a=65;
        for (int j = 0; j < i+1; j++)
        {
            cout<<(char)a<<" ";
            ++a;
        }
        a--;
        for (int k = 0; k < i; k++)
        {
            --a;
            cout<<(char)a<<" ";
        }
        
        cout<<endl;
    }
    
}