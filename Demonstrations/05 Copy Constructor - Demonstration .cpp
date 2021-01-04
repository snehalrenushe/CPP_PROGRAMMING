/// 03 Constructors - Demonstration - Arithmetic Operators


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

        Calculator(Calculator &Ref_Obj)
        {
            No1 = Ref_Obj.No1;
            No2 = Ref_Obj.No2;
            Res = Ref_Obj.Res;

            cout << "\nInside Copy constructor of our Class ." << endl;
        }

        ~Calculator()                             //Destructor
        {
            cout<<"\nInside Destructor of our Class...." << Res << endl;
        }
};


//main Function Definition

int main()
{

    Calculator Obj1;                         //Objects created using Default Constructor

    cout << "\nEnter Two Numbers for Addition =>" << endl;
    cin >>  Obj1.No1 >> Obj1.No2;


    getch();

    Obj1.Add();
    cout << "\n Addition of Given Numbers is = " << Obj1.Res << endl;

    cout<<"Back to main()...." << endl;
    getch();

    Calculator Obj2(15,7);                  //Objects created using Parameterized Constructor

    Obj2.Add();
    cout << "\n Addition of Given Numbers is = " << Obj2.Res << endl;

    getch();

    Calculator MyObj(Obj2);                   //
    cout << "\n\n Value Of Res for New Object => " << MyObj.Res;


    getch();
    return 0;
}
