fffffffffffffffffffffffffrrrrrrrrrrrrrrrrrrrrrrrrrffffrusing namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class Variable
{
    public :

        int i,j;
        Variable()
        {
            i = 14;
            j = 20;
            cout <<" Inside Default Constructor!!!!!...." << endl;
        }

        Variable(int No,int Num)
        {
            No = 105;
            Num = 120;

            cout <<" \nInside Parameterized Constructor !!!!.... " << endl;
        }

        void Fun()
        {
            cout << " Inside Fun() function !!!!.... " << endl;

            i = 15;
            j = 65;
        }

        ~Variable()
        {
            cout <<" \nInside Destructor!!!..." << endl;
        }
};

int main()
{
    /// const int i;                        // error
    /// i = 10;                      /// error
    /// i++;                   /// error

    const int i = 20;

    Variable Obj1;

    Variable Obj2(232,34);

    cout <<" Inside Main Function().... " << endl;

    Obj1.Fun();

    cout << " Value of public characteristic inside class of Obj1 => \n I :" << Obj1.i << " J :" << Obj1.j << endl;

    getch();

    return 0;
}
