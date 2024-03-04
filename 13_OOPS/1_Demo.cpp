#include <iostream>
using namespace std;
class Animal{
    private:
    int weight ;
    public:
    int age;
    string name ;
    Animal(){
        this->weight =0;
        this->age =0;
        this->name = "";
        cout<<"you have entered animal domain"<<endl;
    }
void Eats(){
    cout<<name<<" is eating "<<endl;
}
void Dance(){
    cout<<name<<" is dancing "<<endl;
}
int getweight(){
    return weight;
}
int setweight(int w){
    weight = w;
}

};
int main(){
     Animal Ramesh;
     Ramesh.age=2;
     Ramesh.name= "Ramesh";
    cout<<Ramesh.age<<endl;
    cout<<Ramesh.name<<endl;
    Ramesh.Eats();
    Ramesh.Dance();
    Ramesh.setweight(101);
    cout<<Ramesh.getweight()<<endl;
    Animal * Suresh = new Animal;
    Suresh ->age=17;
    Suresh->name="kutta";
    cout<<Suresh->age<<endl;
    cout<<Suresh->name<<endl;
    
}
