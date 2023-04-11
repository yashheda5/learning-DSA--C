#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the length "<<endl;
    int l;
    cin>>l;
    cout<<"Enter the breadth"<<endl;
    int b;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if(i==0 || i==b-1 || j==0 || j==l-1){
                cout<<"* ";
            } else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    
}