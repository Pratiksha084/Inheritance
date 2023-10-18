#include<iostream>
using namespace std ;
class Pratiksha
{
    public:
    Pratiksha()
    {
        cout<<"This is a Pratiksha\n";
    }
};
class Firstname: public Pratiksha{

};
int main()
{
    Firstname obj;
    return 0;

};