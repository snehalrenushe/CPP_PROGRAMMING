/* A]  Constant Variable of Program.............
   B]

*/

using namespace std;
#include<iostream>
#include<conio.h>

const int gNo = 101;                                         /// 1st Type of Constant

class My_Constant
{
    public:
        int i,j;                                        // Non Constant Characteristics
        const float Pi;                                /// 2nd type of constant
        const int &MyRef;

        My_Constant() : Pi(3.14),i(0),j(0),MyRef(j)                                     //Default Constructor
        {
            i = j =0;
            cout << "\n Inside Default Constructor of our class...";
        }

        My_Constant(int Num,float Val):Pi(Val),i(Num),MyRef(j)
        {
            //Pi = Val                  // error
            i = 101;
            j = 50;
            cout << "\n Inside Parameterized Constructor of our class...";
        }

        const void Fun()                                    /// 3rd Type of Constant
        {
            cout <<"\n Inside PUBLIC fun() function of our class....";

            i = 15;
            j = 20;
        }

        float Area_of_Circle(int Rad)
        {
            float Area  = 0.0;

            Area = Pi * Rad * Rad;

            return Area;
        }

        ~My_Constant()                                          //Destructor
        {
            cout << "\n Inside Destructor of our class...";
        }

};

int main()
{
    const int Num = 51;                                           /// 1st Type of Constant

    const int &Ref = Num;

    My_Constant Obj1;                                                   // object
    const My_Constant Obj2;                                      /// 4th Type of Constant

    My_Constant Obj3(21,3.1416);

    cout <<"\n INSIDE main()!!!";

    Obj1.Fun();

    cout << "\n\n Value of public characteristics of Obj1 => \n I =" << Obj1.i << " J= " << Obj1.j;

    cout << "\n Area of Circle with radius 5 = " << Obj1.Area_of_Circle(5) << endl;
    getch();

    return 0;

}
