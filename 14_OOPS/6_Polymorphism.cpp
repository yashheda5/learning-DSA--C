#include <iostream>
using namespace std;
class Animal{
    public :
    // virtual
     void speak(){
        cout<<"I am in animal class "<<endl;
    }
};
class Dog : public Animal{
    public :
    void speak(){
        cout<<"I am in  dog class "<<endl;
    }
};
int main(){
    //upcasting 
    Animal * shetty = new Dog();
    shetty->speak();

    Dog * rahul =(Dog*)new Animal();
    rahul->speak(); 

}