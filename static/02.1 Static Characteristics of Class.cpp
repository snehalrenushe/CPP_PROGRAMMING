using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class Product
{
    public:
        int N1;
        float per;

        static int N2;

        Product()                                 //Default Constructor
        {
            N1 = N2 = 0;

            cout << "\nInside Default Constructor!!! " << endl;
        }

        Product(int x)                    //Parameterized Constructor
        {
            N1 = 10 * 10;
            N2 = 100 + x;

            cout << "\nInside Parameterized Constructor !!! " << endl;
        }

        void New()               // Member function
        {
            cout << "\nInside Member Function!!!" << endl;
        }

        ~Product()            //Destructor
        {
            cout << "\n Inside Destructor !!! " << endl;
        }

};

int Product :: N2 = 2;

int main()
{
    Product Obj1,Obj2;
    Product Obj3(15);

    cout << "\nValues are = " << Obj1.N1 << " = " << Obj1.N2 << endl;
    cout << "\nValues are = " << Obj2.N1 << " = " << Obj2.N2 << endl;
    cout << "\nValues are = " << Obj3.N1 << " = " << Obj3.N2 << endl;

    //Obj1.New();



    getch();
    return 0;
}
