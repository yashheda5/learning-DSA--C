#include <iostream>
using namespace std;
class A{
    public:
    void subract(){
        cout<<"We are in addition";
    }
};
class B{
    public:
    void subract(){
        cout<<"We are in subraction";
    }
};
class C: public A, public  B{

};
int main(){
    C * obj=new C;
    obj->A::subract();
}