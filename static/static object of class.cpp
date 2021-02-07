#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class demo
{
    public:
        int i = 0,j = 0;

        demo()
        {
            cout << "\nInside default Constructor.." << endl;
            i = 100;
            j = 200;
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
            //cout << "\nValue of j : " << j << endl;
        }

};
int demo1()
{
    static demo d;
}

int main()
{
    cout << "\n" << "size of given object is : " << sizeof(demo1());

    getch();

    demo().fun();
    demo().gun();

    getch();

    demo :: gun();
    return 0;
}
