#include<iostream>
using namespace std;
class firstname
{
    public:
    int first()
    {
        cout<<"Pratiksha";
        return 0;
    }

};
class lastname
{
    public:
    int last()
    {
        cout<<" Phadtare ";
        return 0;
    }
};
class fullname: public firstname,public lastname{};
int main()
{
    fullname obj;
    cout<<obj.first()+" "+obj.last();
}
