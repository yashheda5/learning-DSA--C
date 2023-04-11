#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    int c=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(i==0 || j==0){
                c=1;
            } else{
                c=(c*(i-j+1))/j;
            }
            cout<<c<<" ";
        }
        cout<<endl;
        
    }
    
}
