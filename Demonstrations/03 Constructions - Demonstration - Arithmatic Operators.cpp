/// 03 Constructors - Demonstration - Arithmatic Operators


using namespace std;
#include<iostream>
#include<conio.h>

class Calculator
{
    public:
        int No1,No2,Res;                                       //Public - Data members and characteristics

        void Add()                                   //Public- Member Function or Behavior - Declaration
        {
            cout<<"Inside PUBLIC fun() function of our class..."<< endl;
            Res = No1 + No2;
        }

        Calculator()                             //Default Constructor
        {
            No1 = 0;
            No2 = 0;
            Res = 0;

            cout<<"Inside Default Constructor of our class..." << endl;
        }

        Calculator(int N1,int N2)                             //Parameterized Constructor
        {
            No1 = N1;
            No2 = N2;
            Res = 0;

            cout<<"Inside Parameterized Constructor of our class..." << endl;
        }

        ~Calculator()                             //Destructor
        {
            cout<<"Inside Destructor of our Class...." << Res << endl;
        }
};


//main Function Defination

int main()
{

    Calculator Obj1;                         //Objects created using Default Constructor

    cout << "Enter Two Numbers for Addition =>" << endl;
    cin >>  Obj1.No1 >> Obj1.No2;


    getch();

    Obj1.Add();
    cout << "\n Addition of Given Numbers is = " << Obj1.Res << endl;

    cout<<"Back to main()...." << endl;
    getch();

    Calculator Obj2(15,21);                  //Objects created using Parameterized Constructor

    Obj2.Add();
    cout << "\n Addition of Given Numbers is = " << Obj2.Res << endl;


    getch();
    return 0;
}
