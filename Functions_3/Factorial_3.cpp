#include <iostream>
using namespace std;
int fact(int n){
   int f=1;
    for (int i = 1; i <=n; i++)
    {
        f=f*i;
    }
    return f;
    
}
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    cout<<"The factorial of a number is = "<<fact(n)<<endl;
}