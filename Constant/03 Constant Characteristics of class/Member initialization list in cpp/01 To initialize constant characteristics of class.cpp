using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class demo
{
    public:
        const int i;
        int k ;

        demo():i(34) , k(567)
        {
            cout << "\n Inside Default Constructor !!!!... " << endl;
        }

        demo(int x,int y) : i(x) , k(y)
        {
            cout << "\n Inside Parameterized Constructor .... " << endl;
            k = 78;
        }

        ~demo()
        {
            cout << "\n Inside Destructor of class .... " << endl;
        }
};
int main()
{
    demo Obj1;
    demo Obj2(101,45);

    cout << "\n Inside Main()...." << endl;

    cout << "\n Inside demo the value of i : " << Obj1.i << " and K : " << Obj1.k << endl;
    cout << "\n Inside demo the value of i : " << Obj2.i << " and K : " << Obj2.k << endl;

}
