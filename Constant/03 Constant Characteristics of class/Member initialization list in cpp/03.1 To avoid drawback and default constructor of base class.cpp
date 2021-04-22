using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class Base
{
    public:
        int N1,N2;

    /*  Base()                //solution 1
        {

        } */

        Base(int x,int y)
        {
            N1 = x;
            N2 = y;

            cout << "\n Inside Parameterized Constructor !!!!! " << endl;

        }

        ~Base()
        {
            cout << "\n Inside Destructor !!! " << endl;
        }
};

class Derived : public Base
{
    public:
        int N3;

        Derived()  : Base(100,223)         // solution 2                 // : Base(100,223)
        {
            N3 = 0;

            cout << "\n Inside Default Constructor !!! " << endl;
        }

        Derived(int c )  : Base(10,3)         // solution 2                 // : Base(100,223)
        {
            N3 = c;

            cout << "\n Inside Default Constructor !!! " << endl;
        }

        ~Derived()
        {
            cout << "\n Inside Destructor !!! " << endl;
        }
};

int main()
{
    Derived obj1;

    cout << "\n Object value is = " << obj1.N1 << " = " << obj1.N2 << " = " << obj1.N3 << endl;

    Derived obj2(7777);

    cout << "\n Object value is = " << obj2.N1 << " = " << obj2.N2 << " = " << obj2.N3 << endl;

    getch();
    return 0;
}
