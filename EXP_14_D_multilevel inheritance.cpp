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
class Fullname : public Firstname{

};
int main()
{
    Fullname obj;
    return 0;

};