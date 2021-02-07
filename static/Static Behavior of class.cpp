#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class demo
{
    public:
        int i = 0;
        static int j;

        demo()
        {
            cout << "\nInside default Constructor.." << endl;
            i = 100;
        }

        void fun()
        {
            cout << "\nInside fun() function..." << endl;
            cout << "\nValue of i : " << i << endl;
            cout << "\nValue of j : " << j << endl;
        }

        static void gun()
        {
            cout << "\nInside gun() function which is declared as static !!" << endl;
           // cout << "\nValue of i : " << i << endl;      // error
            cout << "\nValue of j : " << j << endl;
        }

};

int demo::j = 150;

int main()
{
    demo d;

    cout << "\n" << "size of given object is : " << sizeof(d);

    cout << "\n" << d.i;
    cout << "\n" << d.j ;

    getch();

    cout << "\n" << demo :: j << endl;

    getch();

    d.fun();
    d.gun();

    getch();

    demo :: gun();

    return 0;
}
