#include<iostream>
using namespace std ;
class Pratiksha
{
    public:
    Pratiksha()
    {
        cout<<"This is a Pratiksha Phadtare\n";
    }
};
class name: public Pratiksha{

};
class Fullname : public name{

};
int main()
{
    Fullname obj;
    return 0;
}
