#include<iostream>
using namespace std ;
//base class
class vehicle
{
    public:
    string brand="Ford";
    void color()
    {
        cout<< "Red!\n";
    }
};
// derived class
class car: public vehicle
{
    public:
    string model= "Mustang";
};
int main()
{
    car myCar;
    myCar.color();
    cout<<myCar.brand +" "+myCar.model;
    
};
