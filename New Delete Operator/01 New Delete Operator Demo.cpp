/*
   new => For Dynamic Memory Allocation / malloc in c
   delete => For Dynamic Memory Deallocation Using New Operator / free in c
*/


using namespace std;
#include<iostream>
#include<conio.h>

class Demo
{
    public:
        int i,j,k;                                       //Public - Data members and characteristics

        void Fun()                                   //Public- Member Function or Behavior - Declaration
        {
            cout<<"\n Inside PUBLIC fun() function of our class..."<< endl;
            i = k-500;
            j = i*5;
        }

        Demo()                             //Default Constructor
        {
            i=0;
            j=5;
            k=8;

            cout<<"\n Inside Default Constructor of our class...";
            cout<<"\n Values => \t"<< i << "  " << j << "  " << k <<endl;
        }

        Demo(int N1,int N2)                             //Parameterized Constructor
        {
            i=N1;
            j=N2;
            k=56;

            cout<<"\n Inside Parameterized Constructor of our class...";
            cout<<"\n Values => \t"<< i << "  " << j << "  " << k << endl;
        }

        ~Demo()                             //Destructor
        {
            cout<<"\n Inside Destructor of our Class....";
            cout<<"\n Values Inside Destructor of Current Object => \t"<< i << "  " << j << "  " << k << endl;
        }
};


//main Function Defination

int main()
{
    Demo Obj1;                         //Objects created using Default Constructor

    getch();

    Obj1.Fun();

    cout<<"\n Back to main()....";
    getch();

    Demo Obj2(56,266);                  //Objects created using Parameterized Constructor

    getch();

    Demo *Obj3 = new Demo;

    Obj3 -> Fun();

    delete(Obj3);

    cout << "\n==================================================" << endl;

    getch();
    return 0;
}
