using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class demo
{
    public:
        //const int i;
        const int i = 12;
        int j;
        demo()
        {
                  //    i = 20;      // error
            cout << "\n Inside Default Constructor!!..." << endl;
        }

        fun()
        {
            cout << "\n Inside fun() function.... " << endl;

        }

        ~demo()
        {
            cout << "\n Inside Destructor !!!... " << endl;
        }

};
int main()
{
    int k = 15;

    demo Obj1;
    Obj1.fun();

    cout << "Value of i : " << Obj1.i << endl;

    return 0;
}
