#include <iostream>
using namespace std;
int main(){
    cout<<"Enter marks "<<endl;
    int m;
    cin>>m;
    if(m>=90){
        cout<<"S grade"<<endl;
    } else if(m>=80){
        cout <<"A grade"<<endl;
    } else if (m>=70){
        cout<<"B grade"<<endl;
    } else if (m>60){
        cout<<"C grade"<<endl;
    } else if(m>50){
        cout<<"D grade"<<endl;
    } else{
        cout<<"F grade"<<endl;
    }

}