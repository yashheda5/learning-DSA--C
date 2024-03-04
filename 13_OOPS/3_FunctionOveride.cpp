#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    int age;
    int weight;

    void speedup()
    {
        cout << "speeding up" << endl;
    }

    void breakMaro()
    {
        cout << "break mardi" << endl;
    }
};

class Mahindra : public Car
{
    void print()
    {
        cout << "we are in mahindra " << endl;
    }
};
class Scorpion : public Mahindra
{
public:
    void print()
    { 
        cout << "we are in Scorpio " << endl;
    }
};

int main()
{
    Scorpion *yash = new Scorpion();
    yash->print();
    return 0;
}
