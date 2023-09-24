#include <iostream>
using namespace std;
int main(){
         cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    int ans =0;
    while(n>0){
        
        if(n&1==1){
             ans=(ans*10)+1;
        } else{
            ans=(ans*10)+0;
        }
         
        n=n>>1; 
    }
    cout<<ans<<endl;
}