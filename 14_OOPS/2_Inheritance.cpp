#include <iostream>
using namespace std;
class Animal{
    public:
void eats(){
    cout<<"dog eats food "<<endl;
}
};
class dog : public Animal{

};
int main(){

dog d1 ;
d1.eats();

}