///Upcasting & Downcasting
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout << "\n Inside Base Default constructor!!!" << endl;
        }

        virtual void fun()
        {
            cout << "\n Inside Base :: fun() " << endl;
        }

        virtual void gun()
        {
            cout << "\n Inside Base :: gun() " << endl;
        }

        void sun()
        {
            cout << "\n Inside Base :: sun() " << endl;
        }

        ~Base()
        {
            cout << "\n Inside Base Destructor!!!" << endl;
        }
};

class Derived : public Base
{
    public:
        int i,x,y;         /// i is CHARACTERISTIC REDEFINITION

        Derived()
        {
            cout << "\n Inside Derived Default constructor!!!" << endl;
        }

        void fun()                  /// OVERIDING
        {
            cout << "\n Inside Derived :: fun() " << endl;
        }

        void sun()        /// BEHAVIOR REDEFINITION
        {
            cout << "\n Inside Derived :: sun() " << endl;
        }

        virtual void gun()
        {
            cout << "\n Inside Derived :: gun() " << endl;
        }

        ~Derived()
        {
            cout << "\n Inside Derived Destructor!!!" << endl;
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bptr = &dobj;             // Upcasting : Base pointer points address of Derived.
    //Derived *dptr = &bobj;          Downcasting : Derived pointer points address of Base.

    getch();
    return 0;
}
