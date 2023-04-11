#include <iostream>
using namespace std;
double area(int r){
    double ans=2*3.14*r;
    return ans;
}
int main(){
    double r;
    cout<<"Enter the radius of a circle"<<endl;
    cin>>r;
    cout<<area(r)<<endl;
}