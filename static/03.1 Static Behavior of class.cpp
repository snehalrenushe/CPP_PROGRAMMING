#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class customer
{
    public:
        int N1;
        float Per;

        static int N2;

        customer()
        {
            N1 = N2 = 0;
            Per = 100;

            cout << "\nInside default Constructor.." << endl;
        }

        customer(int x)
        {
            N1 = x;
            N2 = x;

            cout << "\nInside Parameterized Constructor.." << endl;
        }

        void Edit()
        {
            N1 = 67;
            N2 = 78;
            Per = 77.78;

            cout << "\nInside Edit() function !!" << endl;
        }

        static void Modify()
        {
            N2 = 0;

            cout << "\nInside Modify() function which is declared as static !!" << endl;
        }

};

int customer :: N2 = 150;

int main()
{
    cout << "\nValue of class variable = " << customer :: N2 << endl;

    customer :: Modify();

    cout << "\n New Value of class variable = " << customer :: N2 << endl;

    customer obj;

    cout << "\n Object values are = > " << obj.N1 << " = " << obj.N2 << " = " << obj.Per << endl;

    obj.Edit();

    cout << "\n Object values are = > " << obj.N1 << " = " << obj.N2 << " = " << obj.Per << endl;

    obj.Modify();

    cout << "\n Object values are = > " << obj.N1 << " = " << obj.N2 << " = " << obj.Per << endl;

    getch();
    return 0;
}
